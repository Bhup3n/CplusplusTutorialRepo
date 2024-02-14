#include <iostream>

void bakePizza();
void bakePizza(std::string topping);

int main(){

    bakePizza("pepperoint"); //this will call the function that takes in one parameter. We can only call one of these functions at a time

    return 0;
}

void bakePizza(){
    std::cout << "here is your pizza" << "\n";
}
void bakePizza(std::string topping){
    std::cout << "here is your pizza with " << topping << "\n";
}