#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){  //the constructor has the same name as the class
        this->name = name;  //the name = the name parameter
        this->age =age;
        this->gpa = gpa;
        //IF THE PARAMETER NAMES ARE DIFFERENT
        //for example (std::string x, int y, double z)
        //we dont need the this->
        //we can just do this:
        //name = x;
        //age = y;
        //gpa = z;
    }
};

int main(){
    //constructor = special method that is automatically called when an object is instantiated
    //useful for assigning values to attributes as arguments

    Student student1("Rick", 70, 7.8); //when we instantiate our student pobject, we pas these variables through to the constructor

    std::cout << student1.name << "\n" << student1.age << "\n" << student1.gpa << "\n";

    return 0;
}