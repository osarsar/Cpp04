#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat: Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
    std::cout << "WrongCat: Copy Constructor called" << std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(WrongCat const& obj)
{
    std::cout << "WrongCat: Copy assignment called" << std::endl;
    if (this != &obj)
        this->type = obj.get_type();
    return (*this);
}

WrongCat::WrongCat(std::string name)
{
    this->type = name;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat: \"Miawwwwwwwww\"" << std::endl;
}