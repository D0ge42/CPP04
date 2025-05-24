#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
  private:
    AMateria *_learnedMateria[4];
  public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &other);
    ~MateriaSource(void);

    MateriaSource &operator=(const MateriaSource &other);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    void printMaterias();
    void *getPtr(int idx);
};

#endif
