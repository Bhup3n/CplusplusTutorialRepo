#include <iostream>

/*void happyBirthday(){
    std::cout << "Happy Birthday to you" << "\n";    //if u have it at the top, the main function will recognise it
}*/

void happyBirthday(std::string name);

int main(){

    std::string name = "Bhupen";

    happyBirthday(name);

    return 0;
}

void happyBirthday(std::string name){ //if we call it after the main function, it will not be recognised so we have to declare the function before the main function but we can define it later
    std::cout << "Happy Birthday to " << name << "\n";
}