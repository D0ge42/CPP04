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
  *this->brain = *ref.brain;
  std::cout << "Dog copy assignment called\n";
  this->_type = ref._type;
  return *this;
}

Dog::Dog(const Dog &ref):Animal(ref)
{
  std::cout << "Dog constructor called\n";
  this->brain = new Brain();
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

void Dog::printBrainAddress() const
{
  std::cout << std::hex << this->brain << std::endl;
}
