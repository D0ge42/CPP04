#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"

Ice::Ice()
{}

Ice::Ice(std::string const &type):_type(type)
{
}

Ice::~Ice()
{}

std::string const &Ice::getType() const
{
  return this->_type;
}

void Ice::use(ICharacter &ref)
{
  std::cout << "Ice: * shoots an ice bolt at " << ref.getName() << std::endl;
}

Ice::Ice(const Ice &ref)
{
  std::cout << "Ice copy constructor called" << std::endl;
  *this = ref;
}

Ice &Ice::operator=(const Ice &ref)
{
  (void)ref;
  std::cout << "Ice assignment operator called" << std::endl;
  return *this;
}
