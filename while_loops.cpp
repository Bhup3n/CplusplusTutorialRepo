#include <iostream>

int main(){
    std::string name;

    while(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "hello " << name;

    //the following is a do while loop
    //a do while loop is do some block of code first and then repeat again if the condition is true

    int number;

    do{ //we do the following code once first
        std::cout << " enter a positive number: ";
        std::cin >> number;
    }while(number < 0); //and then we repeat it if it is true

    std::cout << "the number is " << number << "\n";

    return 0;
}