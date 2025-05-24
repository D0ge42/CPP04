#include "AMateria.hpp"
#include <iostream>
#include "ICharacter.hpp"

AMateria::AMateria():_type("")
{}

AMateria::AMateria(std::string const &type)
{
  this->_type = type;
}

AMateria::AMateria(const AMateria &ref)
{
  *this = ref;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
  (void)ref;
  return *this;
}

AMateria::~AMateria()
{}

void AMateria::use(ICharacter &target)
{
  (void)target;
  std::cout << "???" << std::endl;
}

std::string const &AMateria::getType() const
{
  return this->_type;
}
