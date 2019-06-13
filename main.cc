#include <iostream>

//#include "AbstractFactory/LinuxSocket.h"
#include "Prototype/EmployeeFactory.h"

void TestPrototype() {
  auto new_employee =
      EmployeeFactory::CreateMainOfficeEmployee("Jaspreet", 101);
  std::cout << "New Employee details: (Name:" << new_employee->name()
            << " , address: " << new_employee->address()->suite() 
            << " , street: " << new_employee->address()->street()
            << " , city: " << new_employee->address()->city()
            << ")" << std::endl;

  auto new_employee2 =
      EmployeeFactory::CreateBranchOfficeEmployee("Shashidhar", 103);
  std::cout << "New Employee details: (Name:" << new_employee2->name()
            << " , address: " << new_employee2->address()->suite() 
            << " , street: " << new_employee2->address()->street()
            << " , city: " << new_employee2->address()->city()
            << ")" << std::endl;
}

int main() {
  //LinuxSocket *ptr = new LinuxUdpSocket();
  //ptr->CreateIPv4Socket();
  //ptr->Send();
  TestPrototype();
  return 0;
}
