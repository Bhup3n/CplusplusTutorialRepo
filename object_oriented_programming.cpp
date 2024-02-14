#include <iostream>

class Human{
    public:  //other places can access the following, they can read and write to it and from it
        std::string name; //our human class has a name, job and age. they can also eat, drink and sleep
        std::string job;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "this person is drinking\n";
        }
        void sleep(){
            std::cout << "this person is sleeping";
        }
};

int main(){
    //object is a collection of attributes and methods
    //they can have characteristics and could perform actions
    //can be used to mimic real world items
    //created from a class which acts as a blue print

    Human human1;
    human1.name = "Rick";
    human1.job = "Scientist";
    human1.age = 70;

    std::cout << human1.name << "\n" << human1.job << "\n" << human1.age << "\n";

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}