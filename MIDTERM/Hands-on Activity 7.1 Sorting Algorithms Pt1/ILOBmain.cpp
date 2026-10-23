#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sorting.h"

const int maxSize = 100;

void displayArray(int arr[]);
void displayVotes(int arr[]);
void displayWinner();

int main(){
    int array[maxSize];
    srand(time(0));
    for(int i = 0; i < maxSize; i++){
        array[i]= rand() % 5+1;
    }
    std::cout<< "Unsorted array:\n ";
    displayArray(array);

    std::cout << "\n\nSorted array: \n";
    BubbleSort(array, maxSize);
    displayArray(array);
    displayVotes(array);
    return 0;

}

void displayArray(int arr[]){
    for(int i = 0; i < maxSize; i++){
        std::cout << arr[i] << " ";
    }
}

void displayVotes(int arr[]){
    int candidate1 = 0;
    int candidate2 = 0;
    int candidate3 = 0;
    int candidate4 = 0;
    int candidate5 = 0;

    for(int i = 0; i < maxSize; i++){
        if(arr[i] == 1){
            candidate1++;
        }
        else if(arr[i] == 2){
            candidate2++;
        }
        else if(arr[i] == 3){
            candidate3++;
        }
        else if(arr[i] == 4){
            candidate4++;
        }
        else if(arr[i] == 5){
            candidate5++;
        }
    }
    std::cout<< "\nVote Count: \n";
    std::cout<< "Candidate 1 - Bo Dalton Capistrano: " << candidate1 << "votes" << "\n";
    std::cout<< "Candidate 2 - Cornelius Raymon Agustin: " << candidate2 << "votes" << "\n";
    std::cout<< "Candidate 3 - Deja Jayla Banaga: " << candidate3 << "votes" << "\n";
    std::cout<< "Candidate 4 - Lalla Brielle Yabut: " << candidate4 << "votes" << "\n";
    std::cout<< "Candidate 5 - Franklin Relano Castro: " << candidate5 << "votes" << "\n";

    int highest = candidate1;
    int winner = 1;

    if(candidate2 > highest){
        highest = candidate2;
        winner = 2;
    }
    if(candidate3 > highest){
        highest = candidate3;
        winner = 3;
    }
    if(candidate4 > highest){
        highest = candidate4;
        winner = 4;
    }
    if(candidate5 > highest){
        highest = candidate5;
        winner = 5;
    }


    if(winner == 1){
        std::cout<< "\nWinner: Bo Dalton Capistrano\n";
    }
    else if(winner == 2){
        std::cout<< "\nWinner: Cornelius Raymon Agustin\n";
    }
    else if(winner == 3){
        std::cout<< "\nWinner: Cornelius Raymon Agustin\n";
    }
    else if(winner == 4){
        std::cout<< "\nWinner: Cornelius Raymon Agustin\n";
    }
    else if(winner == 5){
        std::cout<< "\nWinner: Cornelius Raymon Agustin\n";
    }
    
    std::cout<<"Total Votes: " << highest<< "\n";
}


