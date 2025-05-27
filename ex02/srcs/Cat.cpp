#include "Cat.hpp"
#include <iostream>

Cat::Cat():Animal(),_type("Cat")
{
  this->brain = new Brain();
  std::cout << "Cat constructor called\n";
}

Cat::~Cat()
{
  delete this->brain;
  std::cout << "Cat destructor called\n";
}

Cat& Cat::operator=(const Cat &ref)
{
  std::cout << "Cat copy assignment called\n";
  *this->brain = *ref.brain;
  this->_type = ref._type;
  return *this;
}

Cat::Cat(const Cat &ref):Animal(ref)
{
  std::cout << "Cat constructor called\n";
  this->brain = new Brain();
  *this = ref;
}

std::string Cat::getType() const
{
  return this->_type;
}

void Cat::makeSound() const
{
  std::cout << "Cat goes meow🐈" << std::endl;
}

void Cat::printBrainAddress() const
{
  std::cout << std::hex << "\033[1;95m" << this->brain << "\033[0m" << std::endl;
}
