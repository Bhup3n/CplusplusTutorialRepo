#include <iostream>

class Animal{
    public:
        bool alive = true;

        void eat(){
            std::cout << "this animal is eating\n";
        }
};

class Dog : public Animal{ //to inherite you add a colon then public and then the name of the class
    public:
        void bark(){
            std::cout << "the dog goes woof" << "\n";
        }
};

int main(){
    //inheritance is a class that can receive attributes and methods from another class

    Dog dog;
    std::cout << dog.alive << "\n";
    dog.eat();
    dog.bark();

    return 0;
}