#include <iostream>

int main(){
    //type conversion is the conversion of a value of one data type to another
    //implicit = automatic
    //explicit = precede value with new data type (declare the new type) x and put it before the variable

    double x = (int) 3.14;  //x went from equalling 3.14 to just 3

    std::cout << x << "\n";

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;
    std::cout << score << "%" << "\n";

    return 0;
}