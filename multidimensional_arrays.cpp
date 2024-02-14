#include <iostream>

int main(){

    std::string cars[][3] = {{"Mustang", "Escaper", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}}; //first sets of brackets is row size and the next set of brackets is collumn size
    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n"; //to print every row on a new line
    }

    return 0;
}