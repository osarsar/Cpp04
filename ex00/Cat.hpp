#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(Cat const &obj);
        Cat& operator=(Cat const& obj);
        Cat(std::string name);
        void makeSound() const;
};