#include <iostream>
#include <memory>

#include "Contact.h"

class EmployeeFactory {
  public:
  static std::unique_ptr<Contact> CreateMainOfficeEmployee(
      const std::string& name, const int& suite);
  static std::unique_ptr<Contact> CreateBranchOfficeEmployee(
      const std::string& name, const int& suite);
  private:
  static std::unique_ptr<Contact> CreateOfficeEmployeeFromPrototype(
      const std::string& name, const int& suite, const Contact& prototype);
};

