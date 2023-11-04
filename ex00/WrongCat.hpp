#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const &obj);
        WrongCat& operator=(WrongCat const& obj);
        WrongCat(std::string name);
        void makeSound() const;
};