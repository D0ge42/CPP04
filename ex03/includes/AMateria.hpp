#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
  protected:
    std::string _type;

  public:
    // OCF
    AMateria();
    virtual ~AMateria();
    AMateria &operator=(const AMateria &ref);
    AMateria (const AMateria &ref);

    AMateria(std::string const & type);
    virtual std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif // !
