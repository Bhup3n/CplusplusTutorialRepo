#include <iostream>

int main(){
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2;

    int grade = 70;

    grade >= 60 ? std::cout << "you pass" : std::cout << "you fail"; //if grade is higher than 60 then u pass, else you fail

    return 0;
}