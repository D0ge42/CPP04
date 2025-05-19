#pragma once

#include <string>
class Brain
{
  protected:
    std::string _ideas[100];
  public:
    Brain();
    Brain &operator=(const Brain &ref);
    Brain (const Brain &ref);
    virtual ~Brain();
};
