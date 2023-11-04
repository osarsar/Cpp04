#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: Constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& obj)
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& obj)
{
    std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.get_type();
    return (*this);
}

WrongAnimal::WrongAnimal(std::string name)
{
    std::cout << "WrongAnimal: named Constructor called" << std::endl;
    this->type = name;
}

std::string WrongAnimal::get_type() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal: \"sound of Wronganimal\"" << std::endl;
}