#include <iostream>
#include <stack>

int main(){
   
    //create an object
    std::stack<char> stack1;

 

    
    //isEmpty
    std::cout << "\nis the stack empty?" << stack1.empty() << std::endl;
    
    //Push
    stack1.push('J');
    std::cout << "is the stack still empty?" << stack1.empty() << std::endl;
    std::cout << "\nCurrent top of the stack 1: "<< stack1.top() << std::endl;
    
    stack1.push('e');
    std::cout << "Current top of the stack 1: "<< stack1.top() << std::endl;

    stack1.push('r');
    std::cout << "Current top of the stack 1: "<< stack1.top() << std::endl;

    stack1.push('r');
    std::cout << "Current top of the stack 1: "<< stack1.top() << std::endl;

    stack1.push('y');
    std::cout << "Current top of the stack 1: "<< stack1.top() << std::endl;

    //swap
    //declare a new stack variable
    std::stack<char> stack2;

    stack2.push('i');
    stack1.swap(stack2);
    std::cout << "\nSwapping the new stack 2 and stack 1";
    std::cout << "\nCurrent top of the stack 1: "<< stack1.top() << std::endl;
    std::cout << "Current top of the stack 2: "<< stack2.top() << std::endl;
    
    //emplace
    stack1.emplace('S');
    std::cout << "\nEmplacing new data at top..\n";
    std::cout << "Current top of the stack 1: " << stack1.top() << std::endl;
    
    //Pop
    std::cout <<"\npopping the current top of the stack 1..";
    stack1.pop();
    std::cout << "\nShow the current top of the stack 1: " << stack1.top();

  return 0;
}