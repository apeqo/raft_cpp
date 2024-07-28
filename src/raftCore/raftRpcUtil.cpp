//
// Created by swx on 23-12-28.
//

#include "raftRpcUtil.h"

bool RaftRpcUtil::AppendEntries(raftRpcProctoc::AppendEntriesArgs args, raftRpcProctoc::AppendEntriesReply* response) {
  grpc::ClientContext context;
  grpc::Status status = stub_->AppendEntries(&context, args, response);
  return status.ok();
}

bool RaftRpcUtil::InstallSnapshot(raftRpcProctoc::InstallSnapshotRequest args,
                                  raftRpcProctoc::InstallSnapshotResponse *response) {
  grpc::ClientContext context;
  grpc::Status status = stub_->InstallSnapshot(&context, args, response);
  return status.ok();
}

bool RaftRpcUtil::RequestVote(raftRpcProctoc::RequestVoteArgs args, raftRpcProctoc::RequestVoteReply *response) {
  grpc::ClientContext context;
  grpc::Status status = stub_->RequestVote(&context, args, response);
  return status.ok();
}

//先开启服务器，再尝试连接其他的节点，中间给一个间隔时间，等待其他的rpc服务器节点启动

RaftRpcUtil::RaftRpcUtil(std::string ip, short port) {
  //*********************************************  */
  //发送rpc设置
  std::shared_ptr<grpc::Channel> chan = grpc::CreateChannel(
      ip + ":" + std::to_string(port), grpc::InsecureChannelCredentials());
  stub_ = std::make_unique<raftRpcProctoc::raftRpc::Stub>(chan);
}

RaftRpcUtil::~RaftRpcUtil() { }
