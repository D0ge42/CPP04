#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
  std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &ref)
{
  std::cout << "WrongCat copy assignment called\n";
  this->_type = ref._type;
  return *this;
}

WrongCat::WrongCat(const WrongCat &ref):WrongAnimal(ref)
{
  std::cout << "WrongCat constructor called\n";
  *this = ref;
}

std::string WrongCat::getType() const
{
  return this->_type;
}

void WrongCat::makeSound() const
{
  std::cout << "WrongCat goes WOOOOOOOOOOOOOOOOOOOOF\n" << std::endl;
}
