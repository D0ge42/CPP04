#pragma once
#include "Animal.hpp"
#include <string>

class Dog: public Animal
{
  protected:
    std::string _type;
  public:
    Dog();
    ~Dog();
    Dog(const Dog &ref);
    Dog&operator=(const Dog &ref);

    std::string getType() const;
    void makeSound() const;
};
