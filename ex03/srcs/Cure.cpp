#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"

Cure::Cure():_type("cure")
{
}

Cure::Cure(std::string const &type):_type(type)
{
}

Cure::~Cure()
{}

std::string const &Cure::getType() const
{
  return this->_type;
}

Cure::Cure(const Cure &ref):AMateria(ref)
{
  std::cout << "Cure copy constructor called" << std::endl;
  *this = ref;
}

Cure &Cure::operator=(const Cure &ref)
{
  (void)ref;
  std::cout << "Cure assignment operator called" << std::endl;
  return *this;
}

void Cure::use(ICharacter &ref)
{
  std::cout << "Cure: * heals " << ref.getName() << "'s wounds " << std::endl;
}

Cure *Cure::clone()const
{
  return new Cure;
}

