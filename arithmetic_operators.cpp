#include <iostream>

int main() {
    int students = 20;
    students += 2;
    students++; //if you just want to add one
    students *= 3;
    students /= 3;
    std::cout << students << "\n";

    int remainder = students % 2; //the students have to be an integer
    std::cout << remainder << "\n";

    return 0;
}