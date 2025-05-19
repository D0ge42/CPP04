#pragma once

#include <string>
class Animal
{
  protected:
    std::string _type;
  public:
    Animal();
    Animal (const Animal &ref);
    virtual ~Animal();
    Animal &operator=(const Animal &ref);

    // getType
    virtual std::string getType()const ;
    virtual void makeSound() const;
    virtual void printBrainAddress()  = 0;
};

