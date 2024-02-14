#include <iostream>

float testFunction(float num1, float num2){
    float total = num1 + num2;
    return total;
}
int returnInteger(int num){
    int result = num * num;
    return result;
}
int main(){
    std::cout << "hi";
    std::cout << "hello";
    std::cout << "how are you doing";

    std::cout << "\n" << testFunction(4.5, 8.32) << "\n";

    std::cout << returnInteger(5);
}