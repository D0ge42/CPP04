#include "Brain.hpp"
#include <algorithm>
#include <iostream>

Brain::Brain()
{
  std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
  std::cout << "Brain destructor called\n";
}

Brain& Brain::operator=(const Brain &ref)
{
  std::cout << "Brain copy assignment called\n";
  for (int i = 0; i < 100; i++)
    this->_ideas[i] = ref._ideas[i];
  return *this;
}

Brain::Brain(const Brain &ref)
{
  std::cout << "Brain constructor called\n";
  *this = ref;
}

