#include "Cat.hpp"
#include <iostream>

Cat::Cat():Animal(),_type("Cat")
{
  std::cout << "Cat constructor called\n";
}

Cat::~Cat()
{
  std::cout << "Cat destructor called\n";
}

Cat& Cat::operator=(const Cat &ref)
{
  std::cout << "Cat copy assignment called\n";
  this->_type = ref._type;
  return *this;
}

Cat::Cat(const Cat &ref):Animal(ref)
{
  std::cout << "Cat constructor called\n";
  *this = ref;
}

std::string Cat::getType() const
{
  return this->_type;
}

void Cat::makeSound() const
{
  std::cout << "Cat goes meow" << std::endl;
}
