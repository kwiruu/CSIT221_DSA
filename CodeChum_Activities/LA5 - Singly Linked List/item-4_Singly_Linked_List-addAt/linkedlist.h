#include <cstdlib>
#include <iostream>
#include "list.h"
#include "node.h"
using namespace std;

class LinkedList : public List {
	node* head;
	node* tail;
	int size;

    void addTail(int num) {
        add(num);
    }

    void addHead(int num) {
		node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = num;
		if (size == 0) {
            n->next;
			head = n;
			tail = n;
		} else {
			n->next = head;
			head = n;
		}
		size++;
    }

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
        // IGNORE for now
        return 0;
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

    // TODO implement method addAt here

    void addAt(int num, int pos) {
        if(pos==1){
        addHead(num);
        return;
        }
        if(pos > size){
        addTail(num);
        return;
        }
        node* curr = head;
        for(int i=1;i<pos-1;i++){
        curr = curr->next;
        }
        node* n = (node*) calloc (1 ,sizeof(node));
        n->elem = num;
        n->next = curr->next;
        curr->next = n;
        size++;
	}


    // DO NOT MODIFY the lines below.
    void print() {
    	node* curr = head;
    	if (size == 0) {
    		cout << "Empty" << endl;
		} else {
	    	while (true) {
	    		cout << curr->elem;
	    		if (curr != tail) {
	    			cout << " -> ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->next;
			}
		}
    }
};