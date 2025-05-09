#pragma once

#include <string>
class Animal
{
  protected:
    std::string _type;
  public:
    Animal();
    virtual ~Animal();
    Animal &operator=(const Animal &ref);
    Animal (const Animal &ref);

    // getType
    virtual std::string getType()const ;
    virtual void makeSound() const;
};
