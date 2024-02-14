#include <iostream>

int main(){
    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "welcome";
    }
    else if(age <= 0){
        std::cout << "Lil' liar";
    }
    else{
        std::cout << "get outta here";
    }
}