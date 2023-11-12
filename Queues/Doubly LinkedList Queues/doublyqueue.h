#include "linkedlist.h"
#include "queue.h"
#include <iostream>
#include <cmath>
using namespace std;

class DoublyQueue : public Queue {
    LinkedList* list = new LinkedList();
    
    public:
    
     void enqueueFirst(int num){
            list->addFirst(num);
     }
     void enqueueLast(int num){
            list->addLast(num);
     }
     int dequeueFirst(){
        list->removeFirst();
     }
     int dequeueLast(){
        list->removeLast();
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
     void prints(){
         list->print();
     }



};