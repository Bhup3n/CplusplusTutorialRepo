#include <iostream>

int main(){
    //fills a range of elemtns with a specified value
    //fill(begin address, end adress, value)

    const int SIZE = 100;
    std::string foods[SIZE];
    fill(foods, foods + SIZE, "pizza");
    for(std::string food : foods){
        std::cout << food << "\n";
    }
}