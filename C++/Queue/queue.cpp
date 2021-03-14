#include <iostream>
#include <limits>

typedef unsigned int uint;

template<class T> class Queue{
    public:
        Queue(uint Capacity):first(0),rear(Capacity-1),size(0),capacity(Capacity){
            this->array=new T[this->capacity*sizeof(int)];
        }

        
        int isFull(){ 
            return (size==capacity);
        }

        int isEmpty(){ 
            return (size==0); 
        }

        void enqueue(T item){
            if(isFull()) return;
            rear = (rear + 1 ) % capacity;
            array[rear] = item;
            size+=1;
        }

        T dequeue(){
            if(isEmpty()) return MIN_VAL;
            T item = array[first];
            first = (first + 1) % capacity;
            size+=1;
            return item;

        }

        T front(){
            if(isEmpty()) return MIN_VAL;
            
            return array[first];
        }

        T Back(){
            if(isEmpty()) return MIN_VAL;

            return array[rear];
        }

        ~Queue(){
            delete[] array;
        }

    private:
        T first,rear,MIN_VAL=std::numeric_limits<T>::min();
        int size;
        uint capacity;
        T* array;


};

int main()
{
    Queue<int> myQ(3);
    myQ.enqueue(3);
    myQ.enqueue(2);
    myQ.enqueue(1);

    std::cout<<"front value: "<<myQ.front()<<std::endl;
    std::cout<<"Rear value: "<<myQ.Back()<<std::endl;
    std::cout<<"Dequeue value: "<<myQ.dequeue()<<std::endl;
    std::cout<<"new front value: "<<myQ.front()<<std::endl;

    return 0;
}