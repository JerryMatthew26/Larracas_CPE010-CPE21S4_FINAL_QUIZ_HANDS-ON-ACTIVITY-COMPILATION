#include <iostream>
#include "queueLL.h"
#include "queueArr.h"

int main(){
    /*
    qNode<int>* front = nullptr;
    qNode<int>* back = nullptr;

    enqueue(1, &front, &back);
    std::cout << "Front: " << front->data <<" back: " << back->data << "\n"; 
    enqueue(2, &front, &back);
    enqueue(3, &front, &back);
    std::cout << "Front: " << front->data <<" back: " << back->data << "\n"; 

    //display()
    display(front);

    dequeue(&front, &back);
    std::cout << "Front: " << front->data <<" back: " << back->data << "\n"; 
    
    dequeue(&front, &back);
    std::cout << "Front: " << front->data <<" back: " << back->data << "\n"; 
    dequeue(&front, &back);
    dequeue(&front, &back);
    */
    

    //Object creation
    
    queueArr<int> q(6);
    
    q.Enqueue(1);
    std::cout << "Front: " << q.Front() <<" back: " << q.Back() << " Size: "<< q.Size() << "\n"; 
    q.Enqueue(2);
    std::cout << "Front: " << q.Front() <<" back: " << q.Back() << " Size: "<< q.Size() << "\n"; 
    q.Enqueue(3);
    std::cout << "Front: " << q.Front() <<" back: " << q.Back() << " Size: "<< q.Size() << "\n"; 
    q.Enqueue(4);
    std::cout << "Front: " << q.Front() <<" back: " << q.Back() << " Size: "<< q.Size() << "\n"; 
    q.Enqueue(5);
    std::cout << "Front: " << q.Front() <<" back: " << q.Back() << " Size: "<< q.Size() << "\n"; 
    q.Enqueue(6);
    std::cout << "Front: " << q.Front() <<" back: " << q.Back() << " Size: "<< q.Size() << "\n";
    
    return 0;

}
