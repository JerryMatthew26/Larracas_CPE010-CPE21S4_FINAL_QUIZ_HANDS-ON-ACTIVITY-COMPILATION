#ifndef STACK_LIST_H
#define STACK_LIST_H

//class node that contains data and the next:
template <typename T>
class Node{
  public:
  T data;
  Node* next;
};

//Global pointer for the top of the stack
template <typename T>
Node<T> *head = nullptr;

// Operations
//PUSH
template<typename T>
void push(T newData){
  //create a new node and assight the newData
  Node<T>* newNode = new Node<T>;
  newNode->data = newData;

  //new node points to current top then becames the new top
  newNode->next = head<T>;
  head<T> = newNode;
}

//POP
template<typename T>
T pop(){
  //check if the stack is empty
  if(head<T> == nullptr){
    std::cout << "stack Underflow! \n";
  }
  //save the current top node
  Node<T>* temp = head<T>;
  //store its data
  T tempVal = temp->data;

  // move the head to the next node
  head<T> = head<T>->next;
  // free the removed node
  delete temp;
  //return the removed value
  return tempVal;
}

// isEmpty
template<typename T>
bool isEmpty(){
  return head<T> == nullptr;
}

//top
template<typename T>
void Top(){
  //error catching
  if(isEmpty<T>()){
    std::cout<<"Stack Underflow! \n";
    return;
  }
  //display the Top node
  std::cout <<"Top of stack: " << head<T>->data << std::endl;
}

//display All
template<typename T>
void displayALL(){
  if(head<T> == nullptr){
    std::cout << "stack underflow!\n";
    return;
  }
  std::cout << "Displaying the stack: \n";
  Node<T>* temp = head<T>;
  while(temp != nullptr){
    std::cout << temp->data << "\n";
    temp = temp->next;
  }
  std::cout << "\n";
}

#endif