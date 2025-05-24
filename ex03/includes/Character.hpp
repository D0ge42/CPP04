#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
  protected:
    std::string _name;
    AMateria *_inventory[4];
    size_t _items_count;
  public:
    Character();
    ~Character();
    Character &operator=(const Character &ref);
    Character (const Character &ref);
    std::string const &getName()const;
    Character(std::string const &name);
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    AMateria *getPtr(int idx) const;
};
