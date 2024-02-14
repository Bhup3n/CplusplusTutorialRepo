#include <iostream>

enum Day { //Day is like the new data type
    sunday = 0, monday = 1, tuesday = 2
};

int main(){
    //enums are enumerations
    //a user defined data type that consists of paired named integer constants.
    //great if you have a set of potential options

    //we cant normally use strings with switch cases

    Day today = sunday;

    //we are using enum so we can still (in a way) use strings in a switch case
    switch(today){
        case sunday:
            std::cout << "It is sinday" << "\n";
            break;
        case monday:
            std::cout << "It is monday" << "\n";
            break;
        case tuesday:
            std::cout << "It is tuessday" << "\n";
            break;
    }

    return 0;
}