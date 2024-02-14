#include <iostream>

int main(){
    //switch = alternative to using many else if statemetns, compare one value against matching cases

    int month;
    std::cout << "enter the month (1-6): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "it is january";
            break;
        case 2:
            std::cout << "it is february";
            break;
        case 3:
            std::cout << "it is march";
            break;
        case 4:
            std::cout << "it is april";
            break;
        case 5:
            std::cout << "it is may";
            break;
        case 6:
            std::cout << "it is june";
            break;
        default: //if none of the cases match
            std::cout << "lil dumb piece of.. ";
    }

    return 0;
}