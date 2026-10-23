#include <iostream>
#include <string>
#include "doubly_ll.h"


int main(){

    DoubleList<std::string>* head = createNode(
        std::string("Rob Daniel - Nandito ako"));
    DoubleList<std::string>* second = createNode(
        std::string("Hale - Kung wala ka"));
    DoubleList<std::string>* third = createNode(
        std::string("Soapdish - Tensionado"));

    head->next = second;
    second->next = third;
    
    second->prev = head;
    third->prev = second;

    int choice;
    std::string song;

do {

  std::cout << "\n ===== Jerry's Song Playlist ===== \n";
    dllTraversal(head);
    
    std::cout<<"\n\n==== OPTIONS ====\n";
    std::cout<< "[1] Play song playlist\n";
    std::cout<< "[2] Add songs to the playlist\n";
    std::cout<< "[3] Remove a song from the playlist\n";
    std::cout<< "[4] Exit\n\n";
    std::cout<< "Enter choice: ";
    std::cin >> choice;
    std::cin.ignore();

    switch (choice){
    case 1:
        std:: cout << "\nNow playing... \n";
        dllTraversal(head);
        break;
   
    case 2:
        std::cout<< "Enter a song: ";
        getline(std::cin, song);
        dllInsertEnd(std::string(song), head);
        std::cout << "\nSong added successfully\n";
        break;
        
    case 3:
        std::cout << "Select a song you want to remove: \n";
        std::cin >> song;
        break;
        
    case 4:
        std::cout << "Shutdowning Music Player...\n";
        break;
    
    default:
        std::cout<<"invalid choice!\n";
    }
   } while(choice != 4);

   return 0;
}