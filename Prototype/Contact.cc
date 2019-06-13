#include "Contact.h"

Address::Address(const int& suite,
    const std::string& street,
    const std::string& city) :
  suite_(suite),
  street_(street),
  city_(city) {}

Address::Address(const Address& address) :
  suite_(address.suite_),
  street_(address.street_),
  city_(address.city_) {}


Contact::Contact(const std::string& name, Address* address) :
  name_(name),
  address_(address) {}

Contact::Contact(const Contact& contact) :
  name_(contact.name_),
  address_(new Address{*contact.address_}) {}
