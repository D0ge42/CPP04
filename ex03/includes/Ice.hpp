#pragma once
#include "AMateria.hpp"
#include <string>

class Ice: public AMateria
{
  private:
    // std::string _type;
  public:
    // OCF
    Ice();
    ~Ice();
    Ice &operator=(const Ice &ref);
    Ice (const Ice &ref);

    Ice(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    Ice* clone()const ;
    virtual void use(ICharacter& target);
};
