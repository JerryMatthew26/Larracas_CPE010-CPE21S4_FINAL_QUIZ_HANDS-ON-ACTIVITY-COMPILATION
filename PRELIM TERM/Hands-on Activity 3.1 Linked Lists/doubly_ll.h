#ifndef DOUBLY_LL_H
#define DOUBLY_LL_H

//Doublelist Node
template <typename T> 
class DoubleList{
  public:
  T data;
  DoubleList<T>* next;
  DoubleList<T>* prev;
};

//creating a node function
template <typename T>
DoubleList<T>* createNode(T newData){
    
    //dynamic memory allocation for a new node
    DoubleList<T>* newNode = new DoubleList<T>;
    
    newNode->data = newData;
    //point it to the next node
    newNode->prev = nullptr;
    newNode->next = nullptr;

    return newNode;
}

template<typename T>
void dllTraversal(DoubleList<T>* currentNode){
  // check if the list is empty
  if(currentNode == nullptr){
    std::cout << "The list is empty";
    return;
  }
 
  DoubleList<T>* tail;
  std::cout << "";
   //forward traverse
  while(currentNode != nullptr){
    std::cout << currentNode->data << "\n";
    tail = currentNode;
    currentNode = currentNode -> next;
  }
  //reverse traversal
  std::cout << "";
  while(tail != nullptr){
    //std::cout << tail->data << "\n";
    tail = tail->prev;
  }
}

//Inserting a node to the head
template<typename T>
void dllInsertHead(T newData, DoubleList<T>** currentNode){
  //Allocate a new node
  DoubleList<T> *newNode = createNode(newData);

  //point the new node to the currentNode (head)
  newNode -> next = *currentNode;

  //point the currentNode to the newNode
  (*currentNode)->prev = newNode;

  *currentNode = newNode;
}

//Inserting at the End
template <typename T>
void dllInsertEnd(T newData, DoubleList<T> *currenthead){
  //create a new node
  DoubleList<T>* newNode = createNode(newData);

  //traverse until we reach the last node
  while(currenthead-> next != nullptr){
    currenthead = currenthead->next;
  }

  //connect the new node back to the last node
  newNode->prev = currenthead;


  //connect the current node to the new node
  currenthead->next = newNode;

}

template<typename T>
void dllDelete(T findData, DoubleList<T>** head){
  if(*head == nullptr)
  return;

  DoubleList<T>* current = *head;
  DoubleList<T>* prevNode = nullptr;

  while(currNode != nullptr && currNode->data != findData){
    prevNode = currNode;
    currNode = currNode->next;

  if(prevNode == nullptr){
      *head = currNode->next;
  } else{
      prevNode->next = currNode->next;
  }
        
    delete currNode;
  }


}

#endif