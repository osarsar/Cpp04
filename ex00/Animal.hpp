#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        ~Animal();
        Animal(Animal const& obj);
        Animal& operator=(Animal const& obj);
        Animal(std::string name);       
        std::string get_type() const;
        virtual void makeSound() const;
};