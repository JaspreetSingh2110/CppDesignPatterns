#include "EmployeeFactory.h"

std::unique_ptr<Contact> EmployeeFactory::CreateMainOfficeEmployee(
    const std::string& name, const int& suite) {
  static Contact main_office {"", new Address{0, "15th cross", "Bangalore"}};
  return CreateOfficeEmployeeFromPrototype(name, suite, main_office); 
}

std::unique_ptr<Contact> EmployeeFactory::CreateOfficeEmployeeFromPrototype(
    const std::string& name, const int& suite, const Contact& prototype) {
  auto result = std::make_unique<Contact>(prototype);
  result->set_name(name);
  result->address()->set_suite(suite);
  return result;
}

std::unique_ptr<Contact> EmployeeFactory::CreateBranchOfficeEmployee(
    const std::string& name, const int& suite) {
  static Contact branch_office {"", new Address{0, "10th cross", "Mumbai"}};
  return CreateOfficeEmployeeFromPrototype(name, suite, branch_office); 
}
