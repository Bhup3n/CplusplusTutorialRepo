#include <iostream>

void sort(int array[], int size);

int main(){
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size); //we are going to bubble sort the array in order from smalles to largest

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    int temporary;
    for(int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){ //if the index on the left is bigger than the index on the right
                temporary = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporary;
            }
        }
    }
}