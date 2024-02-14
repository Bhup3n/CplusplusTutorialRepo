#include <iostream>
#include <cmath> //including this to access the functinos

int main(){
    double a;
    double b;
    double c;

    std::cout << "how many centimetres is a?: ";
    std::cin >> a;

    std:: cout << "how many centimetres is b?: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Your hypotenuse is " << c << " centimetres" << "\n";
}