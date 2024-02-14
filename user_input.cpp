#include <iostream>

int main(){
    //cout << (insertion operator)
    //cin >> (extraction operator)
    std::string name;
    std::cout << "What is your name?: "; //ask the question and get the user to input something
    std::cin >> name; //store the user input in the name variable with cin

    std::cout << "your name is " << name << "\n";

    std::string full_name;
    std::cout << "what is your full name?: ";
    std::getline(std::cin >> std::ws, full_name); //use this if the input the person is typing may include spaces (getline(std::cin, variable_name)
    //we add the >> std::ws when we have this after some input we just took in with cin because it removes the input delay otherwise before u couldnt input anything

    std::cout << "your full name is" << full_name << "\n";

    return 0;
}