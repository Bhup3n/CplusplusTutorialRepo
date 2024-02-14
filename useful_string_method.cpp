#include <iostream>

int main(){
    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12){ //figure out the length of the variable
        std::cout << "you got some long name";
    }
    else{
        std::cout << "hi how are you " << name;
    }

    bool name_empty = name.empty(); //returns a boolean value telling us whether the variable is empty or not
    name.clear(); //clears our variable
    name.append("@gmail.com"); //appends a string to another string
    std::cout << name.at(0) << "\n"; //only prints out the character at that position
    name = name.insert(0, "@"); //adds the @ sign at the beginning of your string
    name = name.find(" "); //will give you the position of the first space in the name
    name = name.erase(0, 2); //gets rid of the first 2 characters

    return 0;
}