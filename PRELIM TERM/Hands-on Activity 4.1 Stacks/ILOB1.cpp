#include <iostream>

//Global variables
//static
const int maxSize = 10;
char stackArr[maxSize];
char top = -1, newData;

//Function prototypes
// Top, Push, Pop, isEmpty, isFull

//Observer operators
bool isEmpty(){
  return (top == -1);
}
bool isFull(){
  return (top == maxSize-1);
}

void Top(){
// error catching:
  if(isEmpty()) 
  return;
//prints the top element
  std::cout << "The top element is: "<< stackArr[top] << std::endl;
}

void display(){
  while(stackArr[top] != isEmpty()){
    std::cout << stackArr[top] << " ";
    top--;
  }
  return;
}

//Transformer Operators
void Push(){
  //error catching
  if(isFull()){
  std::cout << "Stack Overflow!" << std::endl;
  return;
  }
  
  //ask the user what they want to insert
  std::cout << "What character do you want to push? ";
  std::cin >> newData;

  //storing to the stack
  stackArr[++top] = newData;
}

void Pop(){
  // error catching
  if(isEmpty()){
    std::cout << "Stack Underflow!" << std::endl;
    return;
  }
  
  //display the item to be popped
  std::cout << "Popping: " << stackArr[top] << std::endl;
  //we pop the element from the stack
  top--;
}


int main(){

int choice;
  while (true){
    std::cout<<"\n\n=======================================\n";
    std::cout << "Stack operations: \n";
    std::cout << "[1] push [2] pop [3] isEmpty [4] isFull [5] Top [6] Display\n";
    std::cin >> choice;
  
  switch(choice){
    case 1: Push();
    break;
    case 2: Pop();
    break;
    case 3: std::cout << "Is the stack empty?" << isEmpty() << std::endl;
    break;
    case 4: std::cout << "Is the stack empty?" << isFull() << std::endl;
    break;
    case 5: Top();
    break;
    case 6: display();
    break;
    default: std::cout << "Invalid choice!" << std::endl;
    break;
    }
  }
  
  return 0;
}

//function definition