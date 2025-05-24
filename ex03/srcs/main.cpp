#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include <iostream>

int main()
{
  std::cout << "\n🚀\033[1;91m -- Main test\033[0m\n" << std::endl;
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");


  AMateria* tmp;
  tmp = src->createMateria("ice"); // Materias are not being found --> to fix
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;


  std::cout << "\n🤲\033[1;93m -- Unequip test \033[0m\n" << std::endl;


  IMateriaSource* src1 = new MateriaSource();
  src1->learnMateria(new Ice());
  src1->learnMateria(new Cure());

  ICharacter* me1 = new Character("me1");


  AMateria* tmp1;
  tmp1 = src1->createMateria("ice"); // Stored at index 0
  me1->equip(tmp1);
  tmp1 = src1->createMateria("cure"); // Stored at index 1
  me1->equip(tmp1);
  delete me1->getPtr(0);
  delete me1->getPtr(1);
  me1->unequip(0); // Unequip ice
  me1->unequip(1); // Unequip cure

  ICharacter* bub = new Character("bob");
  me1->use(0, *bub);
  me1->use(1, *bub);
  delete bub;
  delete me1;
  delete src1;

  std::cout << "\n❓\033[1;95m -- Materia does not exists test \033[0m\n" << std::endl;


  IMateriaSource* src2 = new MateriaSource();
  src2->learnMateria(new Ice());

  ICharacter* me2 = new Character("me");


  AMateria* tmp2;
  tmp2 = src2->createMateria("water"); // Stored at index 0
  me2->equip(tmp2);

  ICharacter* beb = new Character("beb");
  me2->use(0, *beb);
  delete beb;
  delete me2;
  delete src2;

  std::cout << "\n⚠️\033[1;95m -- Too many materias \033[0m\n" << std::endl;


  IMateriaSource* src3 = new MateriaSource();
  src3->learnMateria(new Ice());
  src3->learnMateria(new Ice());
  src3->learnMateria(new Ice());
  src3->learnMateria(new Ice());
  src3->learnMateria(new Ice());

  ICharacter* me3 = new Character("me");


  AMateria* tmp3;
  tmp3 = src3->createMateria("ice"); // Stored at index 0
  me3->equip(tmp3);

  ICharacter* bab = new Character("bab");
  me3->use(0, *bab);
  delete bab;
  delete me3;
  delete src3;

  return 0;
}
