#include <iostream>
#include <map>
#include <memory>
#include "LinuxSocketFactory.h"
#include "LinuxSocket.h"

class SocketFactory {
  public:
  SocketFactory();
  std::unique_ptr<LinuxSocket> Create(const std::string &type);
  private:
  std::map<std::string, std::unique_ptr<LinuxSocketFactory>>
      linux_socket_factories_;
};

SocketFactory::SocketFactory() {
  linux_socket_factories_["TCP"] = std::make_unique<LinuxTcpSocketFactory>();
  //linux_socket_factories_["UDP"] = std::make_unique<LinuxUdpSocketFactory>();
}

std::unique_ptr<LinuxSocket> SocketFactory::Create(const std::string& type) {
  return linux_socket_factories_[type]->Create();
}
