#include <iostream>

int main (){
    //sizeof() determines the size in bytes of a variable, data type, etc...
    double gpa = 2.5;
    std::string name = "bro";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(gpa) << " bytes" << "\n";
    //one way to figure out the size of an array
    std::cout << sizeof(grades) / sizeof(char) << " elements" << "\n";

    return 0;
}