#include <iostream>

int main(){
    std::string students[] = {"Spongebob", "Patrick", "Squidwrad"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){ //i starts at 0 and continues to increment by one until we reach the max number of elements in the array
        std::cout << students[i] << "\n";
    }

    return 0;
}