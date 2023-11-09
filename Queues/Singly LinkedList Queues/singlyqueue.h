#include "linkedlist.h"
#include "queue.h"
#include <iostream>
#include <cmath>
using namespace std;

class SinglyQueue : public Queue {
    LinkedList* list = new LinkedList();
    
    public:
    
     void enqueue(int num){
            list->addLast(num);
     }
     int dequeue(){
        return list->removeAt(1);
     }
     int size(){
        return list->Size();
     }
     bool isEmpty(){
        return size()==0;
     }
     int first(){
        return list->get(1);
     }



};