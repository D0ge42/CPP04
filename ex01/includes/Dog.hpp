#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public Animal
{
  private:
    Brain *brain;
  protected:
    std::string _type;
  public:
    Dog();
    ~Dog();
    Dog(const Dog &ref);
    Dog&operator=(const Dog &ref);

    std::string getType() const;
    void makeSound() const;
    void printBrainAddress() const;
};
