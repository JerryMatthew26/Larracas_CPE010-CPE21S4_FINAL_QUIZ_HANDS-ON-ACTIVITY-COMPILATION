#include<iostream>
#include "stackList.h"

int main(){
  std::cout << "=== PUSHING 'j' 'e' 'r' ONTO THE STACK === \n ";
  //push
  push('j');
  push('e');
  push('r');

  //display the current top
  Top<char>(); 
  displayALL<char>();
  std::cout<<"\n ------ Popping all the elements ------ \n";

  while(!isEmpty<char>()){
    std::cout <<"Popped: " << pop<char>() << std::endl;
  }

  std::cout<<"\n ------ Testing the Underflow ------ \n";
  pop<char>();
  
  return 0;

}