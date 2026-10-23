#ifndef BST_H
#define BST_H

template<typename T>
class BinarySearchTree{
  private:
      T key;
      //pointers:
      BinarySearchTree<T>* left;
      BinarySearchTree<T>* right;

  public:
    //constructor:
    BinarySearchTree(T value);
    void insert(T value);
    //traversing algo:
    void preOrder();
    void inOrder();
    void postOrder();
    void findData(int choice, T key);

};

template<typename T>
BinarySearchTree<T>::BinarySearchTree(T value){
  key = value;
  left = nullptr;
  right = nullptr;
}

template<typename T>
void BinarySearchTree<T>::insert(T value){
    if(value < key){
        if(left == nullptr){
        left = new BinarySearchTree<T>(value);
      }else{
        left->insert(value);
      }
    }
    else if(value > key){
      if(right == nullptr){
        right = new BinarySearchTree<T>(value);
      }else{
        right->insert(value);
      }
    
    }
}

template<typename T>
void BinarySearchTree<T>::preOrder(){
  std::cout << key << " ";
  if(left != nullptr){
    left->preOrder();
  }
  if(right != nullptr){
    right->preOrder();
  }
}

template<typename T>
void BinarySearchTree<T>::inOrder(){
  // go to left
  if(left != nullptr){
    left->inOrder();
  }
  std::cout << key << " ";
  // go to right
  if(right != nullptr){
    right->inOrder();
  }
}

template<typename T>
void BinarySearchTree<T>::postOrder(){
  
  if(left != nullptr){
    left->postOrder();
  }
  
  if(right != nullptr){
    right->postOrder();
  }
  std::cout << key << " ";
}

template<typename T>
void BinarySearchTree<T>::findData(int choice, T key){

  bool found = false;

  if(choice == 1){
    found = preOrder(key);
  }
  else if(choice == 2){
    found = inOrder(key);
  }
  else if(choice == 3){
    found = postOrder(key);
  }

  if(found){
    std::cout << key << "Was found" << std::endl;
  }
}



#endif 