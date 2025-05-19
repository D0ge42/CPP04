#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
<%
  std::cout << "\n\033[1;97m###BASIC ANIMAL TEST###\033[0m\n";

  std::cout << "\033[1;92mCONSTRUCTORS\033[0m\n";
  const Animal* meta = new Animal();
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();


  std::cout << "\033[1;95mTYPE(virtual method)\033[0m\n";
  std::cout << dog->getType() << " " << std::endl;
  std::cout << cat->getType() << " " << std::endl;

  std::cout << "\033[1;93mSOUND(virtual method)\033[0m\n";
  dog->makeSound();
  cat->makeSound();
  meta->makeSound();

//##################################################################//
  std::cout << "\n\033[1;97m########WRONG ANIMAL TEST########\033[0m\n";

  std::cout << "\033[1;92mCONSTRUCTORS\033[0m\n";
  const WrongAnimal* wrong = new WrongAnimal();
  const WrongAnimal* wrongCat = new WrongCat();

  std::cout << "\033[1;95mTYPE (virtual method)\033[0m\n";
  std::cout << wrong->getType() << " " << std::endl;
  std::cout << wrongCat->getType() << " " << std::endl;

  std::cout << "\033[1;93mSOUND (non virtual method)\033[0m\n";
  wrongCat->makeSound();
  wrong->makeSound();
  std::cout << "\n\033[1;92mQ: Why, even tho wrongCat has its own makeSound method the 'wrongAnimal' one is executed?\033[0m\n";
   std::cout << "\033[1;91mA: Thats because the sound method of the wrongAnimal class is not virtual, therefore subclasses cannot override the parent's makeSound method.\033[0m\n";

//##################################################################//
  std::cout << "\n\033[1;97m########COPY CONSTRUCTOR ANIMAL TO DOG########\033[0m\n";

  std::cout << "\033[1;92mCONSTRUCTORS\033[0m\n";
  std::cout << "\033[1;96m look what happens. INCREDIBLE!! \033[0m\n";
  const Animal copyDog = Dog();
  std::cout << "\033[1;96m WTF!!destructors called that early??? \033[0m\n";
  std::cout << "\033[1;95mTYPE (virtual method)\033[0m\n";
  std::cout << "CopyDog type: " << copyDog.getType() << (char)0xa;
  std::cout << "\033[1;93mSOUND (non virtual method)\033[0m\n";
  copyDog.makeSound();

  // Q & A
  std::cout << "\n\033[1;92mQ: Why does the animal destructor gets called before it has a chance to make any noise?\033[0m\n";
   std::cout << "\033[1;91mA: Since we pass a dog reference to the copy assignment operator, that has to build up both an animal and dog destructors. These will get destroyed when the function returns, calling their destructors. Alltought the istance calling the makesound method is not destroyed yet.\033[0m\n";
  std::cout << "\n\033[1;92mQ: Why even tho we copy-assign a Dog Instance the makeSound and type returns the type of a generic animal?\033[0m\n";
   std::cout << "\033[1;91mA: Probably because the copy assingment operator of animal Takes an animal reference, which can also be a Dog Class.\033[0m\n";

//##################################################################//

  std::cout << "\n\033[1;97m########COPY CONSTRUCTOR ANIMAL TO ANIMAL########\033[0m\n";

  std::cout << "\033[1;92mCONSTRUCTORS\033[0m\n";
  const Animal animal = Animal();
  std::cout << "\033[1;95mTYPE\033[0m\n";
  animal.getType();
  std::cout << "\033[1;93mSOUND\033[0m\n";
  animal.makeSound();

   std::cout << "\033[1;92mAs you can see in this case what happened on the top example doesn't happen and no destructor is called 'early'\033[0m\n";
  std::cout << "\n\n\033[1;91mDESTRUCTORS\033[0m\n";
  delete meta;
  delete dog;
  delete cat;
  delete wrongCat;
  delete wrong;
%>
