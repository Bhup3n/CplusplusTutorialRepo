#include <iostream>
#include <vector> //have to include this header file

typedef std::vector<std::pair<std::string, int>> pairlist_t; //we are turning a really long data type and we are making it so we can just call it pairlist_t (_t at end is naming rule)
typedef std::string text_t; //a more simple example
using number_t = int; //is another more popular way to do it

int main(){
    //type def is a reserved keyword used to create an additional name (alias) for another data type. New identifier for an existing type helps with readability and reduces typos
    //(using does the same thing)
    pairlist_t pairlist;
    text_t firstName = "Bro";
    std::cout << firstName << "\n";

    return 0;
}