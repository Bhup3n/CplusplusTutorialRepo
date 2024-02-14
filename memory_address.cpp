#include <iostream>

int main(){
    //a memory address = a location in memory where data is stored
    //a memory address can be accessed with &

    std::string name = "bro";
    int age = 21;
    bool student = true;

    std::cout << &name << "\n"; //displays the address of the name variable
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
}