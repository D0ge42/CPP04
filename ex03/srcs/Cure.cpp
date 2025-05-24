#include "Cure.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(std::string const &type):AMateria(type)
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
  *this = ref;
}

Cure &Cure::operator=(const Cure &ref)
{
  (void)ref;
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

