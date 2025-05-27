#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <ios>
#include <iostream>

int main()
{
  std::cout << "\n\033[1;92mCONSTRUTORS\033[0m⚙️\n";
  Animal *deep_animals[10];
  Animal *shallow_animals[10];
  for (int i = 0; i < 5; i++)
    deep_animals[i] = new Dog();
  for (int i = 5; i < 10; i++)
    deep_animals[i] = new Cat();


  std::cout << "\n\033[1;93m CORRECTION SHEET TEST \033[0m\n";
  Dog basic;
  {
    basic.printBrainAddress();
    Dog tmp = basic;
    tmp.printBrainAddress();
  }

 std::cout << "\n\033[1;95mSOUND\033[0m🔉\n";
  for (int i = 0; i < 10;i++)
    deep_animals[i]->makeSound();

 std::cout << "\n\033[1;91mTEST DEEP COPY \033[0m🪛\n";
 for (int i = 0; i < 10; i++)
   std::cout << std::hex << deep_animals[i] << std::endl;

 std::cout << "\n\033[1;96mTEST SHALLOW COPY \033[0m🧬\n";
 for (int i = 0; i < 5; i++)
   shallow_animals[i] = deep_animals[0];
 for (int i = 5; i < 10; i++)
   shallow_animals[i] = deep_animals[5];

 for (int i = 0; i < 10; i++)
   std::cout << std::hex << shallow_animals[i] << std::endl ;

 std::cout << "\n\033[1;91mDESTRUCTORS\033[0m💥\n";
 for (int i = 0; i < 10;i++)
   delete deep_animals[i];
}
