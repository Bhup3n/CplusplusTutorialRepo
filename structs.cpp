#include <iostream>

struct student{    //the student is an identifier (its kind of like its own data type)
    std::string name;
     double gpa;
     bool enrolled;
     bool dancing = true; //you can set default values
};

int main(){
    //struct is a structure that group related variables under one name
    //they can contain many different data types like string, int, bool, etc..
    //variables in a struct are known as members
    //members can be accessed with. Class Member Access Operator

    student student1; //student 1 has its own name, gpa and enrolled status
    student1.name = "Bhupen"; //student1 name is Bhupen
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Max";
    student2.gpa = 7.6;
    student2.enrolled = false;
    student2.dancing = false;

    std::cout << student1.name << ":" << student1.gpa << ":" << student1.enrolled << "\n"; //1 means true and 0 means false

    return 0;
}