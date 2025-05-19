#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type):_type(type)
{
}

AMateria::~AMateria()
{}

std::string const &AMateria::getType() const
{
  return this->_type;
}
