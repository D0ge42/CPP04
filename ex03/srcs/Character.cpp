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
  {
      if (this->_inventory[i])
        delete this->_inventory[i];
  }
}

Character::Character(std::string const &name):_name(name)
{
    for (int i = 0; i < 4; i++)
      _inventory[i] = NULL;
}

Character &Character::operator=(const Character &other)
{
  this->_name = other._name + "_copy";
  this->_items_count = other._items_count;
  for (int i = 0; i < 4; i++)
    delete _inventory[i];
  for (int i = 0; i < 4 ; i++)
    this->_inventory[i] = other._inventory[i]->clone();
  this->_items_count = other._items_count;
  return (*this);
}

Character::Character(const Character &other)
{
  this->_name = other._name;
  for (int i = 0; i < 4; i++)
    delete _inventory[i];
  for (int i = 0; i < 4 ; i++)
    this->_inventory[i] = other._inventory[i]->clone();
  this->_items_count = other._items_count;
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
  std::cout <<  "items count = " << _items_count << std::endl;
  if (m && _items_count < 4)
  {
    _inventory[i] = m;
    std::cout << "equipped " << m->getType() << std::endl;
    this->_items_count++;
  }
}


void Character::unequip(int idx)
{
  if (idx >= 0 && idx <= 3 && _items_count > 0)
  {
    this->_inventory[idx] = NULL;
    this->_items_count--;
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

size_t Character::getItemCount() const
{
  return this->_items_count;
}
