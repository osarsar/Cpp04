#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat: Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat: destructor called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
    std::cout << "Cat: Copy Constructor called" << std::endl;
    *this = obj;
}

Cat& Cat::operator=(Cat const& obj)
{
    std::cout << "Cat: Copy assignment called" << std::endl;
    if (this != &obj)
        this->type = obj.get_type();
    return (*this);
}

Cat::Cat(std::string name)
{
    this->type = name;
}

void Cat::makeSound() const
{
    std::cout << "Cat: \"Miawwwwwwwww\"" << std::endl;
}