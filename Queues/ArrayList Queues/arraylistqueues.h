#include <iostream>
#include "queue.h"
#include "arraylist.h"
using namespace std;

class ArrayQueues : public Queue {
    ArrayList* list = new ArrayList(); 
    public:
    void enqueue(int num){
        list->addLast(num);
    }
    int dequeue(){
        if(isEmpty()){
            return 0;
        }
        return list->remove();
    }
    bool isEmpty(){
        return size() == 0;
    }
    int size(){
        return list->Size();
    }
    int first(){
        return list->get(1);
    }
};