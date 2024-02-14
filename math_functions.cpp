#include <iostream>
#include <cmath> //to get all the functions (apart from max and min)

int main(){
    double x = 3.14;
    double y = 4;
    double z;

    z = std::max(x, y); //finds the highest out of x and y
    z = std::min(x, y); //finds the lowest out of x and y
    z = pow(2, 3); //z = 2 to the power of 3
    z = sqrt(9); //square root of 9
    z = abs(-5); //absolute value
    z = round(x); //round the number inside the bracfkets
    z = ceil(x); //always round the number up
    z = floor(x); //always rounds the number down
    std::cout << z << "\n";

    return 0;
}