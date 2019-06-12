#include "LinuxSocketFactory.h"

std::unique_ptr<LinuxSocket> LinuxTcpSocketFactory::Create() {
  return std::make_unique<LinuxTcpSocket>();
}

std::unique_ptr<LinuxSocket> LinuxUdpSocketFactory::Create() {
  return std::make_unique<LinuxUdpSocket>();
}
