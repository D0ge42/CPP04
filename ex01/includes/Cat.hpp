#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
  private:
    Brain *brain;
  protected:
    std::string _type;
  public:
    Cat();
    ~Cat();
    Cat &operator=(const Cat &ref);
    Cat (const Cat &ref);

    // getType
    std::string getType() const;
    void makeSound() const;
    void printBrainAddress() const;
};
