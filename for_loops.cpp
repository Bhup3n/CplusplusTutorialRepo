#include <iostream>

int main(){
    for(int i = 1; i <= 3; i++){ //i = 1, continue the for loop until i = 3 or is bigger than 3, I+=1 everytime we do one of the for loop
        std::cout << "This is the " << i << " repetition" << "\n";
    }

    return 0;
}