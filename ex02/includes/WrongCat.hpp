#pragma once

#include "WrongAnimal.hpp"
#include <string>

class WrongCat:public WrongAnimal
{
  protected:
    std::string _type;
  public:
    WrongCat();
    ~WrongCat();
    WrongCat &operator=(const WrongCat &ref);
    WrongCat (const WrongCat &ref);

    // getType
    std::string getType()const ;
    void makeSound() const;
};
