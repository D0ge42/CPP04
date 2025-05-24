#include "Character.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include <cstdio>
#include <iostream>


Character::Character():_items_count(0)
{
  for (int i = 0; i < 4; i++)
    _inventory[i] = NULL;
}

Character::~Character()
{
  for (int i = 0; i < 4; i++)
    delete this->_inventory[i];
}

Character::Character(std::string const &name):_name(name)
{
  if (&name == NULL)
  {
    for (int i = 0; i < 4; i++)
      _inventory[i] = NULL;
  }
}

Character &Character::operator=(const Character &other)
{
  this->_name = other._name + "_copy";
  this->_items_count = other._items_count;
  for (int i = 0; i < 4; i++)
    delete _inventory[i];
  for (int i = 0; i < 4 ; i++)
    this->_inventory[i] = other._inventory[i]->clone();
  return (*this);
}

Character::Character(const Character &other)
{
  for (int i = 0; i < 4; i++)
    delete _inventory[i];
  for (int i = 0; i < 4 ; i++)
    this->_inventory[i] = other._inventory[i]->clone();
}

std::string const &Character::getName() const
{
  return this->_name;
}

void Character::use(int idx, ICharacter &ref)
{
  if (this->_inventory[idx])
    this->_inventory[idx]->use(ref);
  else
    std::cout << "can't use a materia that doesn't exists" << std::endl;
}

void Character::equip(AMateria *m)
{
  int i = 0;
  while(_inventory[i])
    i++;
  if (m)
  {
    _inventory[i] = m;
    std::cout << "equipped " << m->getType() << std::endl;
  }
}


void Character::unequip(int idx)
{
  if (idx >= 0 && idx <= 3)
  {
    this->_inventory[idx] = NULL;
  }
}

AMateria *Character::getPtr(int idx) const
{
  if (idx >= 0 && idx <= 3)
  {
    return this->_inventory[idx];
  }
  return NULL;
}
