#include "Dog.hpp"
#include <iostream>

Dog::Dog():Animal(),_type("Dog")
{
  this->brain = new Brain();
  std::cout << "Dog constructor called\n";
}

Dog::~Dog()
{
  delete this->brain;
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
  std::cout << "Dog goes woof🐕" << std::endl;
}

void Dog::printBrainAddress()
{
  std::cout << std::hex << "\033[1;93m" << this->brain << "\033[0m"   << std::endl;
}
