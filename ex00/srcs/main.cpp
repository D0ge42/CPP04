#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{

  std::cout << "\033[1;97m###BASIC ANIMAL TEST###\033[0m\n";
  std::cout << "\033[1;92mCONSTRUCTORS\033[0m\n";
  const Animal* meta = new Animal();
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();


  std::cout << "\033[1;95mTYPE\033[0m\n";
  std::cout << dog->getType() << " " << std::endl;
  std::cout << cat->getType() << " " << std::endl;

  std::cout << "\033[1;93mSOUND\033[0m\n";
  dog->makeSound();
  cat->makeSound();
  meta->makeSound();

  std::cout << "\033[1;97m###WRONG ANIMAL TEST###\033[0m\n";
  std::cout << "\033[1;92mCONSTRUCTORS\033[0m\n";
  const WrongAnimal* wrong = new WrongAnimal();
  const WrongAnimal* wrongCat = new WrongCat();

  std::cout << "\033[1;95mTYPE\033[0m\n";
  std::cout << wrong->getType() << " " << std::endl;
  std::cout << wrongCat->getType() << " " << std::endl;

  std::cout << "\033[1;93mSOUND\033[0m\n";
  wrongCat->makeSound();
  wrong->makeSound();


   std::cout << "\033[1;91mDESTRUCTORS\033[0m\n";

  delete meta;
  delete dog;
  delete cat;
  return 0;
}
