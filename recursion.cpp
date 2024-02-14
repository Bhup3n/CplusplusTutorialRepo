#include <iostream>

void walk(int steps);

int main(){
    //recursion is when a function invokes (calls_ itself) from within
    //breaks a complex concept into a repeatable single step

    //iterave vs recursive
    //advantages of recursive = less code and is cleaner, useful for soriting and searching algorithms
    //disadvantages of recursive = uses more memory, is slower

    walk(100);

    return 0;
}
/*void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step\n";                       <------ is an iterative approach
    }
}*/

void walk(int steps){
    if (steps > 0){
        std::cout << "you take a step\n";  //                    <-------- is a recursive approach
        walk(steps - 1);
    }
}