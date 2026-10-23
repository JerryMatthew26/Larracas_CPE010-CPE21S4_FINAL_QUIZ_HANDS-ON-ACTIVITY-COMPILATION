#include <iostream>
#include "singly_ll.h"
#include "doubly_ll.h"

int main(){
    
    //
    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');

    // connecting the nodes:
    
    // connect the head node to the next node:
    head->next = second;
    second->prev = head;

    second->next = third;
    third-> prev = second;

    // traversal
    std::cout << "\nTesting the difference List: \n";
    dllTraversal(head); 
    
    std::cout<< "\n\nTesting the dllInsertHead: \n";
    dllInsertHead('X', &head);
    dllTraversal(head);

    std::cout<< "\n\nTesting the dllInsertEnd: \n";
    dllInsertEnd('0', head);
    dllTraversal(head);



    return 0;
}