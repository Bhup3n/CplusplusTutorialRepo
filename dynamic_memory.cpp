#include <iostream>

int main(){
    //dynamic memory is memory that is allocated after the program is already compiled and running.
    //use the 'new' operator to allocate the memory in the heap rather than the stack
    //useful when we dont know how much memory we will need. Makes our programs more flexible, especially when accpeting user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << &pNum << "\n";

    delete pNum; //when you use the new operator, you should delete the variable at the end because you may cause a memory leak if you dont

    //dynamically creating an array of grades
    char *pGrades = NULL;
    int size;

    std::cout << "how many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i =0; i < size; i++){
        std::cout << "Enter grade number " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; //to delete an array you bet a set of brackets after the delete

    return 0;
}