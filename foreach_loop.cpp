#include <iostream>

int main(){
    //foreach loop is a loop that eases the traversal over an iterable data set

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for(std::string student : students){
        std::cout << student << "\n";
    }
}