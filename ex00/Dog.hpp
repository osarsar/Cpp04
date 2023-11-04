#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(Dog const& obj);
        Dog& operator=(Dog const& obj);
        Dog(std::string name);
        void makeSound() const;
};