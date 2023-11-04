#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const& obj);
        WrongAnimal& operator=(WrongAnimal const& obj);
        WrongAnimal(std::string name);       
        std::string get_type() const;
        virtual void makeSound() const;
};