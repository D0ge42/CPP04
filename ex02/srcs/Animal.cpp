#include "Animal.hpp"
#include <iostream>

Animal::Animal():_type("Generic animal")
{
  std::cout << "Animal \033[1;92mconstructor called\033[0m\n";
}

Animal::~Animal()
{
  std::cout << "Animal \033[1;91mdestructor called\033[0m\n";
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

void Animal::makeSound() const
{
  std::cout << "Zoo noises" << std::endl ;
}

