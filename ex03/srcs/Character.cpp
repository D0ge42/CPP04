#include "Character.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

Character::Character():items_count(0)
{
  for (int i = 0; i < 4; i++)
    _inventory[i] = NULL;
}

Character::Character(std::string const &name):_name(name)
{
  for (int i = 0; i < 4; i++)
    _inventory[i] = NULL;
}

std::string const &Character::getName() const
{
  return this->_name;
}

void Character::use(int idx, ICharacter &ref)
{
  this->_inventory[idx]->use(ref);
}

void Character::equip(AMateria *m)
{
  int i = 0;
  while(_inventory[i])
    i++;
  _inventory[i] = m;
}
