#include <iostream>
#include "singly_ll.h"


int main(){
    
    //
    SinglyList<char>* head = nullptr;
    SinglyList<char>* second = nullptr;
    SinglyList<char>* third = nullptr;
    SinglyList<char>* fourth = nullptr;
    SinglyList<char>* fifth = nullptr;


    //allocated memort to the head
    head = new SinglyList<char>;
    second = new SinglyList<char>;
    third = new SinglyList<char>;
    fourth = new SinglyList<char>;
    fifth = new SinglyList<char>;

    //added the data to the node
    head->data = 'J';
    second->data = 'E';
    third->data = 'R';
    fourth->data = 'R';
    fifth->data = 'Y';

    //assign the next to the node
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    std::cout << "Testing the ListTraversal Function: \n";
    ListTraversal(head);

    std::cout << "Testing the  Insert at head Function: \n";
    sllInsertHead('Q', &head);
    ListTraversal(head);

    std::cout << "Testing the  Insert at Any Location Function: \n";
    sllGeneralInsert('X', head->next->next);
    ListTraversal(head);

    std::cout << "Testing the  Insert at End Function: \n";
    sllInsertEnd('U', &head);
    ListTraversal(head);
    
    std::cout << "Testing the  Delete a node Function: \n";
    sllDeleteNode('X', &head);
    ListTraversal(head);

    std::cout << "Testing the  Delete All Function: \n";
    sllDeleteList(&head);
    ListTraversal(head);

return 0;
}