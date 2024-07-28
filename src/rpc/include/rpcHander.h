#pragma once
#include <google/protobuf/descriptor.h>
#include <functional>
#include <string>
#include <unordered_map>
#include <vector>
#include "google/protobuf/service.h"
#include "raftRpcUtil.h"
#include "raft.h"
#include <thread>
#include <fstream>
class GrpcHander {
public:
  void NotifyService(grpc::Service *service);
  void Run(int nodeIndex, short port);
  void startService(const std::string& address, grpc::Service *service);
private:
  std::vector<grpc::Service *> m_serviceMap;
};
