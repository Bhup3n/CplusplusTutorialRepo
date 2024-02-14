#include <iostream>

int main(){
    int x = 5;
    std::cout << x << "\n";

    int age = 21; //is integer
    double price = 10.99; //is decimals
    char grade = 'A'; //is a single character (it has to be assigned with quotes ''
    bool student = true; //for boolean
    std::string name = "bro"; //for string and has to have speech marks ""

    std::cout << "hello " << name << " you are " << age << " years old and it will cost " << price << "\n";

    const double HEIGHT = 1.67;
    std::cout << "you are " << HEIGHT << " metres" << "\n";
    return 0;
}