#include <iostream>
#include "BST.h"

int main(){
  //create the root node:
  BinarySearchTree<char> tree('A');

  tree.insert('G');
  tree.insert('C');
  tree.insert('D');
  tree.insert('J');
  tree.insert('F');
  tree.insert('B');
  tree.insert('I');
  tree.insert('H');
  tree.insert('E');
  tree.insert('P');
  tree.insert('L');
  tree.insert('Q');
  tree.insert('N');
  tree.insert('K');
  tree.insert('M');

  std::cout<<"\n ===== Traversals =====";
  std::cout<<"\npreOrder: ";
  tree.preOrder();
  std::cout<<std::endl;

  std::cout<<"\ninOrder: ";
  tree.inOrder();
  std::cout<<std::endl;

  std::cout<<"\npostOrder: ";
  tree.postOrder();
  std::cout<<std::endl;

  int choice;
  char key;

  std::cout<< " ====== findData  ======";
  std::cout<< "\nSelect binary search type:\n";
  std::cout<< "1. preOrder\n";
  std::cout<< "2. inOrder\n";
  std::cout<< "3. postOrder\n";
    
  std::cout<< "\nEnter a number you want to choose(1-3): ";
  std::cin >> choice;
  if (choice >= 1 && choice <= 3) {
    std::cout<< "Enter a Key to find: ";
    std::cin>> key;
  }

  return 0;
}