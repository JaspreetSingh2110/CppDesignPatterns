#include <iostream>
#include <memory>

// Socket header files
#include <netdb.h> 
#include <netinet/in.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <sys/types.h>

namespace {                                                                     
  constexpr int kInvalidSocket = -1;                                            
}

class LinuxSocket {
public:
  LinuxSocket();
  virtual int Create() = 0;
  virtual int CreateIPv4Socket() = 0;
  virtual int CreateIPv6Socket() = 0;
  virtual int IsIPv4() = 0;
  virtual int IsIPv6() = 0;
  virtual int Send() = 0;
  virtual int Connect() = 0;
  int SocketFd();
protected:
  int socket_fd_;
  int family_;
};

class LinuxTcpSocket : public LinuxSocket {
public:
  int Create() override;
  int CreateIPv4Socket() override;
  int CreateIPv6Socket() override;

  int IsIPv4() override;
  int IsIPv6() override;
  int Send() override;
  int Connect();
};

class LinuxUdpSocket : public LinuxSocket {
public:
  int Create() override;
  int CreateIPv4Socket() override;
  int CreateIPv6Socket() override;

  int IsIPv4() override;
  int IsIPv6() override;
  int Send() override;
  int Connect() override;
};

