#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"

Ice::Ice():_type("ice")
{
  std::cout << this->_type << " constructed\n";
}

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

Ice::Ice(const Ice &ref):AMateria(ref)
{
  std::cout << "Ice copy constructor called" << std::endl;
  this->_type = ref.getType();
  *this = ref;
}

Ice &Ice::operator=(const Ice &ref)
{
  this->_type = ref._type;
  std::cout << "Ice assignment operator called" << std::endl;
  return *this;
}

Ice *Ice ::clone()const
{
  return new Ice;
}

