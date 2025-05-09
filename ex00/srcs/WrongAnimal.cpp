#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
  std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destructor called\n";
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref)
{
  std::cout << "WrongAnimal copy assignment called\n";
  this->_type = ref._type;
  return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
  std::cout << "WrongAnimal constructor called\n";
  *this = ref;
}

std::string WrongAnimal::getType() const
{
  return this->_type;
}

void WrongAnimal::makeSound()  const
{
  std::cout << "Wrong animal noises\n";
}
