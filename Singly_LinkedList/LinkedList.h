#include <iostream>
#include "list.h"
#include "node.h"
using namespace std;

class LinkedList : public List{
    node* head;
    node* tail;
    int size = 0;
    

public:
    
    void addFirst(int num){
        node* temp = new node;
        temp->elem = num;
        if(size==0){
            temp->next = head;
            head = temp;
            tail = temp;
            size++;
            return;
        }
        else{
        temp->next = head;
        head = temp;
        size++;
        }
    }

    void addLast(int num){
        node* temp = new node;
        temp->elem = num;
        temp->next = nullptr;
        if(size==0){
            head = temp;
            tail = temp;
            size++;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
            size++;
        }
    }

    void removeFirst(){
        node* temp = new node;
        if(size==0){
            return;
        }
        temp = head;
        head = head->next;
        free(temp);
        
        size--;
    }

   void removeLast(){
        node* curr = new node;
        
        if(size==0){
            return;
        }
        else if(size==1){
            free(tail);
            tail = nullptr;
            head = nullptr;
            size--;
        }
        else{
            curr = head;
            while(curr->next!=tail){
                curr = curr->next;
            }
            curr->next = nullptr;
            tail = curr;
            size--;
        }
    }

    void addAt(int pos, int num){
        node* curr = new node;
        node* temp = new node;
        temp->elem = num;
        int ctr=1;
            
            if(pos==1){
                addFirst(num);
                return;
            }
            else if(pos==size+1){
                addLast(num);
                return;
            }
            else{
                curr=head;
                while(curr!=nullptr && ctr!=pos-1){
                        curr = curr->next;
                        ctr++;
                }
                        temp->next = curr->next;
                        curr->next = temp;
            }
        size++;
    }

    void print(){
        node* curr = head;
        while(curr!=nullptr){
            if(curr!=tail){
            cout << curr->elem << " -> ";
            }
            else{
                cout << curr->elem << endl;
            }
            curr = curr->next;
        }
        cout << "Size [" << size << "]." << endl;
    }


};