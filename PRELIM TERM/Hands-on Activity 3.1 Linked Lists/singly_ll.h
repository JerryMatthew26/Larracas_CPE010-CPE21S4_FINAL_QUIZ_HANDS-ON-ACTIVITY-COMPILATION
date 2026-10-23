#ifndef SINGLY_LL_H
#define SINGLY_LL_H

template <typename T>
class SinglyList{
    public:
    T data;
    SinglyList<T>* next;
};

template <typename T>
void ListTraversal(SinglyList<T>* node){
    
    // if the list is empty:
    if(node == nullptr){
        std::cout << "The list is empty. \n";
        return;
    }
    
    while(node != nullptr){
        std::cout << node->data;

        if(node->next != nullptr){
            std::cout << "->";
        }

        node = node->next;
    }
    std::cout << std::endl;
}

template <typename T>
void sllInsertHead(T newData, SinglyList<T>** currentHead){

    //Allocate new node
    SinglyList<T>* newNode = new SinglyList<T>;
    //Put data to in new node
    newNode -> data = newData;
    // set next of the new node to point to the previous head
    newNode->next = *currentHead;
    // reset head to point to the new node.
    *currentHead = newNode;
}

    //Any node between the head and the end node.
template <typename T>
void sllGeneralInsert(T newData, SinglyList<T>* prevNode){

    //Check if it is the head node
    if(prevNode == nullptr){
    std::cout << "Previous node cannot be Null.\n";
    }

    //Allocate the new node
    SinglyList<T>* newNode = new SinglyList<T>;

    // Store the data
    newNode->data = newData;

    // Point new node to node previous node that was pointing to
    newNode->next = prevNode->next;

    // Point previous node to the new node
    prevNode->next = newNode;
}

template <typename T>
void sllInsertEnd(T newData, SinglyList<T>** head){

    //Allocate new Node
    SinglyList<T>* newNode = new SinglyList<T>;
    //dereference to the head node
    SinglyList<T>* currentNode = *head;
    //store data in new node
    newNode -> data = newData;
    //point the new node to null
    newNode -> next = nullptr;

    //Tranverse the list of the current node to the new node
    while(currentNode->next != nullptr){
        currentNode = currentNode->next;
    }

    //Point the next of the current node to the new node
    currentNode->next = newNode;
}


template <typename T>
void sllDeleteNode(T findData, SinglyList<T>**  head){

    if(*head == nullptr) return;

    SinglyList<T>* currNode = *head;
    SinglyList<T>* prevNode = nullptr;

    // Search for the data
    while(currNode != nullptr && currNode->data != findData){
        prevNode = currNode;
        currNode = currNode->next;
    }
    // Data not found
    if(currNode == nullptr) return;   

    if(prevNode == nullptr){
        *head = currNode->next;
    } else{
        prevNode->next = currNode->next;
    }
        
    delete currNode;
}

    template <typename T>
    void sllDeleteList(SinglyList<T>** head){
    SinglyList<T>* current = *head;

    while(current != nullptr){
        SinglyList<T>* temp = current;
        current = current->next;
        delete temp;
    }
    
    *head =  nullptr;

}
#endif