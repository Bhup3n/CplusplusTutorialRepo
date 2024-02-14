#include <iostream>

int main(){
    //if u wnna declare an array and assign stuff to it later you have to declare it but with the size of the array as well so: std::string car[3];
    std::string car[] = {"Corvette", "Mustand", "Camry"};

    std::cout << car[0]; //if you just try to print out the whole list, it just gives the list address

    car[0] = "Camaro"; //change element 0 to camaro

    return 0;
}