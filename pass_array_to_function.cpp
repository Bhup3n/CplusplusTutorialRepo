#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size); //when passing an array to the function, you dont need the square brackets

    std::cout << "$" << total << "\n";

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}