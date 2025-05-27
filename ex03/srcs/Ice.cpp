#include "Ice.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice::Ice(std::string const &type):AMateria(type)
{
}

Ice::~Ice()
{

}

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
  this->_type = ref._type;
  *this = ref;
}

Ice &Ice::operator=(const Ice &ref)
{
  this->_type = ref._type;
  return *this;
}

Ice *Ice ::clone()const
{
  return new Ice;
}

