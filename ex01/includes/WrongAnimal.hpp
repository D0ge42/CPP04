#pragma once

#include <string>
class WrongAnimal
{
  protected:
    std::string _type;
  public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &ref);
    WrongAnimal (const WrongAnimal &ref);

    // getType
    virtual std::string getType()const ;
    void makeSound() const;
};
