#include "LinuxSocket.h"

LinuxSocket::LinuxSocket()
  : socket_fd_(kInvalidSocket),
    family_(AF_INET) {}

int LinuxSocket::SocketFd() {
  return socket_fd_;
}

// LinuxTcpSocket APIs
int LinuxTcpSocket::Create() {
  if (family_ == kInvalidSocket) {
    family_ = AF_INET;
  }
  socket_fd_ = socket(family_, SOCK_STREAM, 0);
  return socket_fd_;
}

int LinuxTcpSocket::CreateIPv4Socket() {
  family_ = AF_INET;
  return Create();
}

int LinuxTcpSocket::CreateIPv6Socket() {
  family_ = AF_INET6;
  return Create();
}

int LinuxTcpSocket::IsIPv4() {
  return family_ == AF_INET;
}

int LinuxTcpSocket::IsIPv6() {
  return !IsIPv4();
}

int LinuxTcpSocket::Send() {
  std::cout << "LinuxTcpSocket Send" << std::endl;
  return 0;
}

int LinuxTcpSocket::Connect() {
  std::cout << "LinuxTcpSocket Connect" << std::endl;
  return 0;
}

// LinuxUdpSocket APIs
int LinuxUdpSocket::Create() {
  if (family_ == kInvalidSocket) {
    family_ = AF_INET;
  }
  socket_fd_ = socket(family_, SOCK_DGRAM, 0);
  return socket_fd_;
}

int LinuxUdpSocket::CreateIPv4Socket() {
  family_ = AF_INET;
  return Create();
}

int LinuxUdpSocket::CreateIPv6Socket() {
  family_ = AF_INET6;
  return Create();
}

int LinuxUdpSocket::IsIPv4() {
  return family_ == AF_INET;
}

int LinuxUdpSocket::IsIPv6() {
  return !IsIPv4();
}

int LinuxUdpSocket::Send() {
  std::cout << "LinuxUdpSocket Send" << std::endl;
}

int LinuxUdpSocket::Connect() {
  return 0;
}


