#include <iostream>

#include "AbstractFactory/LinuxSocket.h"

int main() {
  LinuxSocket *ptr = new LinuxUdpSocket();
  ptr->CreateIPv4Socket();
  ptr->Send();
  return 0;
}
