#include <cstdlib>
#include <iostream>
#include "list.h"
#include "node.h"
using namespace std;

class LinkedList : public List {
	node* head;
	node* tail;
	int size;

	public:
	void add(int num) {
		node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = num;
		if (size == 0) {
			head = n;
			tail = n;
		} else {
			tail->next = n;
			tail = n;
		}
		size++;
	}

    int get(int pos) {

    int i = 0;

    node* x = head;

    while(i <pos - 1){
    x = x->next;
    i++;
    }
        return x->elem;
    }

    int remove(int num) {
    	node* curr = head;
    	node* prev;
        int ctr = 1;
    	while (curr) {
    		if (curr->elem == num) {
                if (curr == head) {
                    head = head->next;
                } else {
                    if (curr == tail) {
                        tail = prev;
                    }
        			prev->next = curr->next;
                }
    			size--;
    			return ctr;
			}
			prev = curr;
			curr = curr->next;
    		ctr++;
		}
        return -1;
	}

    // TODO implement addHead and addTail

    void addHead(int num){

    node* x = new node;

    x->elem = num;
    if(!head){
        x->next = NULL;
        tail = x;
    }
    else{
        x->next = head;
    }
    head = x;
    size++;
    }

    void addTail(int num){
    add(num);
    }

    void print() {
    	node* curr = head;
    	if (size == 0) {
    		cout << "Empty" << endl;
		} else {
	    	do {
	    		cout << curr->elem;
	    		if (curr->next) {
	    			cout << " -> ";
				} else {
					cout << endl;
				}
	    		curr = curr->next;
			} while (curr);
		}
    }
};