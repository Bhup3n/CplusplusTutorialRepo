#include <iostream>

int myNum = 3; //this variable is now global and can be accessed by all functions

void printNum();

int main(){
    //local variables = declared inside a function or block {}
    //global variables are declared outside all functions
    //think of it like it is coding in Unity

    printNum();

    return 0;
}

void printNum(){
    std::cout << myNum << "\n";
}

