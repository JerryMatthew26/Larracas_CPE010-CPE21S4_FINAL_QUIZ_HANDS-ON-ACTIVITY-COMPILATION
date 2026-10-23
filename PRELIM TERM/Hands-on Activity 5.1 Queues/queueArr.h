#ifndef QUEUEARR_H
#define QUEUEARR_H
#include <iostream>

template <typename T>
class queueArr{
    private:
    //pointer to dynamically alalocated array
        T* q_array;
        size_t q_capacity;
        size_t q_size;
        int q_front;
        int q_back;
    
    public:
    //constructor
    queueArr(size_t capacity = 10);

    bool Full();
    bool Empty();
    size_t Size();
    void Clear();

    T Front();
    T Back();

    void Enqueue(T value);
    void Dequeue();

    //Copy constructor 
    queueArr(const queueArr& other);

    //Copy assignment operator
    queueArr& operator=(const queueArr& other);

    //destructor
    ~queueArr();


};

//constructor
template<typename T>
queueArr<T>::queueArr(size_t capacity){
    q_capacity = capacity;
    q_size = 0;
    q_front = 0;
    q_back = -1;
    q_array = new T(q_capacity);

}

template<typename T>
bool queueArr<T>::Full(){
    return q_size == q_capacity;
}

template<typename T>
bool queueArr<T>::Empty(){
    return q_size == 0;
}

template<typename T>
size_t queueArr<T>::Size(){
    return q_size;
}

template<typename T>
void queueArr<T>::Clear(){
    q_size = 0;
    q_front = 0;
    q_back = -1;
}

template<typename T>
T queueArr<T>::Front(){
    // what will happen if the queue is empty
    if(Empty()){
        std::cout << "The Queue is Empty. \n";
        return T();

    }
    return q_array[q_front];

}

template <typename T>
T queueArr<T>::Back(){
    if(Empty()){
        std::cout << "The Queue is Empty. \n";
        return T();
    }
    return q_array[q_back];
}

template<typename T>
void queueArr<T>::Enqueue(T value){
    //check if the queue is full
    if(Full()){
        std::cout << "The Queue is Full.\n";
        return;
    }
    //compute for the q_back for circular (use the module operator)
    q_back = (q_back + 1) % q_capacity;

    //assign the q_array with the updated q_back to the value
    q_array[q_back+1] = value;
    //increment the q_size
    q_size++;
    return;
}

template<typename T>
void queueArr<T>::Dequeue(){
    //check if it is empty
    if(Empty()){
        std::cout << "The Queue is Empty.\n";
        return;
    }
    //move q_front circularity
    q_front = (q_front + 1) % q_capacity;
    //decrement the q_size
    q_size--;

    if(Empty()){
        Clear();
        return;
    }
}

template<typename T>
queueArr<T>::~queueArr(){
    delete[] q_array;
}
#endif //QUEUEARR_LL