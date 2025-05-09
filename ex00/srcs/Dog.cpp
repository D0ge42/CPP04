#include "Dog.hpp"
#include <iostream>

Dog::Dog():Animal(),_type("Dog")
{
  std::cout << "Dog constructor called\n";
}

Dog::~Dog()
{
  std::cout << "Dog destructor called\n";
}

Dog& Dog::operator=(const Dog &ref)
{
  std::cout << "Dog copy assignment called\n";
  this->_type = ref._type;
  return *this;
}

Dog::Dog(const Dog &ref):Animal(ref)
{
  std::cout << "Dog constructor called\n";
  *this = ref;
}

std::string Dog::getType() const
{
  return this->_type;
}

void Dog::makeSound() const
{
  std::cout << "Dog goes woof" << std::endl;
}
