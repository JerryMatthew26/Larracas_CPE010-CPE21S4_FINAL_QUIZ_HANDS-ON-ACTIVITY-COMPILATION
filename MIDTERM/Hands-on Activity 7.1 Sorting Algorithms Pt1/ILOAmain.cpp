#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sorting.h"


const int maxSize = 100;

void displayArray(int arr[]);


int main(){
    int array[maxSize];
    srand(time(0));
    for(int i = 0; i < maxSize; i++){
        array[i]= rand() % 100;
    }
    displayArray(array);
    
    std::cout << "\n\nBubble Sort testing: \n";
    BubbleSort(array, maxSize);
    displayArray(array);
    
    //std::cout << "\n\nSelection Sort testing:\n";
    //SelectionSort(array, maxSize);
    //displayArray(array);

    //std::cout << "\n\nInsertion Sort testing:\n";
    //InsertionSort(array, maxSize);
    //displayArray(array);
    return 0;
}

void displayArray(int arr[]){
    for(int i = 0; i < maxSize; i++){
        std::cout << arr[i] << " ";
    }
}