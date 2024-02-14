#include <iostream>

int main(){
    //the following literally works as it does in C#
    // && = check if 2 conditions are true
    // || = or, if one of the 2 conditions is true
    // ! = reverses the logical state

    int temp;

    std::cout << "enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30){
        std::cout << "the temperature is good";
    }
    else if (temp >= 100 || temp <= 0){
        std::cout << "the temperature is bad";
    }
    else{
        std::cout << "the temperature is " << temp;
    }
}