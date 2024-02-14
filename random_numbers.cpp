#include <iostream>
#include <ctime> //to get access to the time function

int main(){

    srand(time(NULL)); //uses current time as a seed to generate random numbers

    //int num = rand() ; //just rand() gives a number up to 32767 and we want a random number from one to 6 so...
    //int num = rand() % 6; //now this gives us a random number between 0 and 5
    int num = (rand() % 6) + 1;

    std:: cout << num;

    return 0;
}