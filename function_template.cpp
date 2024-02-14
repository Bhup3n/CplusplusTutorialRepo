#include <iostream>
template <typename T>

T max(T x, T y){ //using t is a naming convention. think of t as standing for thing     //this function template can work with many data types
    return (x > y) ? x : y; //if x is greater than y then return x and if not then return y
}

//you have to add typename U before adding this function
/*auto big(T x, U y){  //using u allows this function to take up to 2 data types and auto determines what the data type that is returned should be
    return (x > y) ? x : y;
}*/

int main(){
    //function template describes what a function looks like
    //it can be used to generate as many overloaded functions as needed, each using different data types

    std::cout << max(1.64, 2.32) << "\n";

    return 0;
}