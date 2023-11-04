#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal: Constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(Animal const& obj)
{
    std::cout << "Animal: Destructor called" << std::endl;
    *this = obj;
}

Animal& Animal::operator=(Animal const& obj)
{
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.get_type();
    return (*this);
}

Animal::Animal(std::string name)
{
    std::cout << "Animal: named Constructor called" << std::endl;
    this->type = name;
}

std::string Animal::get_type() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal: \"sound of animal\"" << std::endl;
}