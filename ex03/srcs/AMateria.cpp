#include "AMateria.hpp"
#include <iostream>
#include "ICharacter.hpp"

AMateria::AMateria():_type("")
{}

AMateria::AMateria(std::string const &type):_type(type)
{
}

AMateria::AMateria(const AMateria &ref)
{
  std::cout << "AMateria copy constructor called" << std::endl;
  *this = ref;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
  (void)ref;
  std::cout << "AMateria assignment operator called" << std::endl;
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
