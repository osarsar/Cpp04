#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog: Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog: destructor called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
    std::cout << "Dog: Copy Constructor called" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(Dog const& obj)
{
    std::cout << "Dog: Copy assignment called" << std::endl;
    if (this != &obj)
        this->type = obj.get_type();
    return (*this);
}

Dog::Dog(std::string name)
{
    this->type = name;
}

void Dog::makeSound() const
{
    std::cout << "Dog: \"Hawwwwwwwwww\"" << std::endl;
}