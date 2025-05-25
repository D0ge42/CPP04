#pragma once

#include "AMateria.hpp"
#include <string>


class ICharacter
{
  public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    virtual AMateria *getPtr(int idx) const = 0;
    virtual size_t getItemCount() const = 0;
  protected:
    const std::string _name;
};
