#pragma once
#include "AMateria.hpp"
#include <string>

class Cure: public AMateria
{
  private:
    // std::string _type;
  public:
    Cure();
    ~Cure();
    Cure &operator=(const Cure &ref);
    Cure (const Cure &ref);

    Cure(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    Cure* clone()const ;
    virtual void use(ICharacter& target);
};
