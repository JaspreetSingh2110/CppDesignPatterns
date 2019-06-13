#include <iostream>
#include <memory>

class Address {
  public:
  Address() {}
  Address(const int& suite, const std::string& street, const std::string& city);
  Address(const Address& address);

  void set_suite(const int& suite) { suite_ = suite; }
  int suite() { return suite_; }
  std::string& street() { return street_; }
  std::string& city() { return city_; }

  private:
  int suite_;
  std::string street_;
  std::string city_;
};

class Contact {
  public:
  Contact() {}
  Contact(const std::string& name, Address *address);
  Contact(const Contact& contact);

  void set_name(const std::string& name) { name_ = name; }
  std::string& name() { return name_; }
  Address* address() { return address_; }

  private:
  std::string name_;
  Address *address_;
};


