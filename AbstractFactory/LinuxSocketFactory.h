#include <iostream>
#include <memory>
#include "LinuxSocket.h"

class LinuxSocketFactory {
  public:
  virtual std::unique_ptr<LinuxSocket> Create() = 0;
  virtual ~LinuxSocketFactory() = default;
};

class LinuxTcpSocketFactory : LinuxSocketFactory {
  public:
  std::unique_ptr<LinuxSocket> Create() override;
};

class LinuxUdpSocketFactory : LinuxSocketFactory {
  public:
  std::unique_ptr<LinuxSocket> Create() override;
};
