#include "rpcHander.h"

void GrpcHander::NotifyService(grpc::Service *service) {
    m_serviceMap.push_back(service);
}

void GrpcHander::Run(int nodeIndex, short port) {
  //获取可用ip
  char *ipC;
  char hname[128];
  struct hostent *hent;
  gethostname(hname, sizeof(hname));
  hent = gethostbyname(hname);
  for (int i = 0; hent->h_addr_list[i]; i++) {
    ipC = inet_ntoa(*(struct in_addr *)(hent->h_addr_list[i]));  // IP地址
  }
  std::string ip = std::string(ipC);
  std::string node = "node" + std::to_string(nodeIndex);
  std::ofstream outfile;
  outfile.open("test.conf", std::ios::app);  //打开文件并追加写入
  if (!outfile.is_open()) {
    std::cout << "打开文件失败！" << std::endl;
    exit(EXIT_FAILURE);
  }
  outfile << node + "ip=" + ip << std::endl;
  outfile << node + "port=" + std::to_string(port) << std::endl;
  outfile.close();

  for(auto map : m_serviceMap) {
        std::string address = ip + std::string(":");
        address += std::to_string(port);
        std::thread t(&GrpcHander::startService, this, address, map);
        t.detach();
    }
  }
void GrpcHander::startService(const std::string& address, grpc::Service *service) {
    std::cout << "address" << address << std::endl;
    grpc::ServerBuilder builder;
    builder.AddListeningPort(address, grpc::InsecureServerCredentials());
    builder.RegisterService(service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
   // LOG(INFO) << "Server listening on port: " << address;
    server->Wait();
}
