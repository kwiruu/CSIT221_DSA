#include "list.h"
#include <iostream>
#include "node.h"
using namespace std;

class CircularLL : public List {
	node* tail;
	int size;

public:
	void add(int num) {
		addFirst(num);
	}

	void addFirst(int num) {
        node* temp = new node;
        temp->elem = num;

        if (size==0) {
            temp->next = temp;
            tail = temp;
            size++;
        } else {
            temp->next = tail->next;
            tail->next = temp;
            size++;
        }
	}

	void addLast(int num) {
        node* temp = new node;
        temp->elem = num;

        if(size==0){
            temp->next = temp;
            tail = temp;
            size++;
        }
        else{
            temp->next = tail->next;
            tail->next = temp;
            tail=temp;
            size++;
        }
	}

	int get(int pos) {
        //ignore
        return 0;
	}

	int getTail() {
        if(size==0){
            return -1;
        }
        return tail->elem;
	}

	void rotate() {
        if(tail!=nullptr && tail->next != nullptr){
            tail = tail->next;
        }
	}

	int remove(int num) {
		// IGNORE
		return 0;
	}

	int removeFirst() {
    if(size==0){
    return -1;
    }

    int num = tail->next->elem;

        node* curr;
        curr = tail->next;
        tail->next = curr->next;
        free(curr);
        size--;
        return num;
	}

	void print() {
    int ctr = 0;
    cout << "Size: " << size << endl;
        if(size == 0){
            cout << "Empty" << endl;
        }else{
            while (ctr < size){
            ctr++;
            rotate();
            cout << tail->elem;
            cout << "->";
            }
            cout << tail->next->elem << endl;
        }
     }
};