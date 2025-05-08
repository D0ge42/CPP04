#pragma once

#include <string>
class WrongAnimal
{
  protected:
    std::string _type;
  public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &ref);
    WrongAnimal (const WrongAnimal &ref);

    // getType
    std::string getType()const ;
    void makeSound() const;
};
