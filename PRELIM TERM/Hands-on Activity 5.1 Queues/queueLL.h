#ifndef QUEUELL_H
#define QUEUELL_H
#include <iostream>

template <typename T>
class qNode{
    public:
    T data;
    qNode *next;
};

template <typename T>
qNode<T> *new_node(T newData){
    qNode<T> *newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

template<typename T>
void enqueue(T newData, qNode<T>** frontPtr, qNode<T>** backPtr){
    //create a new node
    qNode<T>* newNode = new_node(newData);

    //insterting an item into a empty queue
    if((*frontPtr) == nullptr && (*backPtr)== nullptr){
        //assign the frontPtr to the newNode
        (*frontPtr) = newNode;
        //assign the backPtr to the newNode
        (*backPtr) = newNode;
    }

   //point the back nex to the newNode
   (*backPtr)->next = newNode;
   // the newNode will be the new backPtr
   (*backPtr) = newNode;
   return;


}

template<typename T>
void dequeue(qNode<T> **frontPtr, qNode<T> **backPtr){
    //how to determine if the queue is empty?
    if((*frontPtr)== nullptr && (*backPtr) == nullptr){
        return;
    } 

    //creating a temporary pointer
    qNode<T>* temPtr = nullptr;
    //store the frontPtr to the tempPrt
    temPtr = (*frontPtr);

    //check if queue has only 1 node left?
    if((*frontPtr) == (*backPtr)){
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;
        delete temPtr;
        return;
    }

    //update the frontPtr
    (*frontPtr) = (*frontPtr)->next;

    //point the temPtr to next to null
    temPtr->next = nullptr;

    delete temPtr;
}

//display all items in the queue 
template <typename T>
void display(qNode<T>* frontPtr){
    //catch if the queue is empty
    if(frontPtr == nullptr){
        std::cout << "The queue is empty.\n";
        return;
    }
    //temp pointer to store the front Ptr
    qNode<T>* current = frontPtr;
    //create a loop that will print the temPtr->data
    while(current != nullptr){
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
#endif