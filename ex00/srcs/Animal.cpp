#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
  std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
  std::cout << "Animal destructor called\n";
}
Animal& Animal::operator=(const Animal &ref)
{
  std::cout << "Animal copy assignment called\n";
  this->_type = ref._type;
  return *this;
}

Animal::Animal(const Animal &ref)
{
  std::cout << "Animal constructor called\n";
  *this = ref;
}

std::string Animal::getType() const
{
  return this->_type;
}

void Animal::makeSound()  const
{
  std::cout << "Zoo noises\n";
}
