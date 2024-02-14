#include <iostream>

int main(){
    //pointers are variables that stores a memory address of another variable
    //sometimes its easier to work with an address
    //& addres of operatior
    //* dereference operator

    std::string name = "Bhupen";
    std::string *pName = &name; //common naming convention for pointers start with p. our pointer equals the address of the name variable

    std::cout << pName << "\n"; //this prints out the address of name
    std::cout << *pName << "\n"; //this prints out what the name variable actually stores


    //null pointers
    //null means the pointer is holding a null value so it is not pointing at anything
    //nullptr is the keyword that represents a null pointer literal
    //nullptrs are helpful when determining if an address was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){ //do this because if your pointer is a null pointer, it isnt safe to de reference that pointer
        std::cout << "Failed to assign an address to the pointer" << "\n";
    }
    else{
        std::cout << "Address was assigned" << "\n";
        std::cout << *pointer << "\n";
    }
    return 0;
}