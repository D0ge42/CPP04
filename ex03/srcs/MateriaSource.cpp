#include "MateriaSource.hpp"
#include <iostream>

void MateriaSource::learnMateria(AMateria *ptr)
{
  size_t i = 0;
  while(i < 4 && _learnedMateria[i] != NULL)
    i++;
  if (i == 4)
  {
    std::cout << "You cannot learn more materia" << std::endl;
    delete ptr;
  }
  else
  {
    if (ptr)
      this->_learnedMateria[i] = ptr;
  }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
  for (int i = 0; i < 4; i++)
  {
    if (this->_learnedMateria[i] && this->_learnedMateria[i]->getType() == type)
    {
      std::cout << "New materia of type: " << type << " created" << std::endl;
      return this->_learnedMateria[i]->clone();
    }
  }
  std::cout << "Materia " << type << " not found" << std::endl;
  return 0;
}

MateriaSource::MateriaSource(void)
{
  for (int i = 0; i < 4; i++)
    _learnedMateria[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
  for (int i = 0; i < 4; i++)
    this->_learnedMateria[i] = NULL;
  for (int i = 0; i < 4; i++)
  {
    if (other._learnedMateria[i])
      this->_learnedMateria[i] = other._learnedMateria[i]->clone();
  }
}

MateriaSource::~MateriaSource(void)
{
  for (int i = 0; i < 4; i++)
    delete this->_learnedMateria[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ref)
{
  for(int i = 0; i < 4; i++)
	{
		if (this->_learnedMateria[i])
			delete this->_learnedMateria[i];
		if (ref._learnedMateria[i])
			this->_learnedMateria[i] = (ref._learnedMateria[i])->clone();
	}
  return (*this);
}

void MateriaSource::printMaterias()
{
  for (int i = 0; i < 4 ; i++)
  {
    if (this->_learnedMateria[i])
      std::cout << this->_learnedMateria[i]->getType() << std::endl;
  }
}
