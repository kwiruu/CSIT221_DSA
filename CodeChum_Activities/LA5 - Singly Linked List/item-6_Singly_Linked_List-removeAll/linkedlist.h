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
        // IGNORE for now
        return 0;
    }

    int remove(int num) {
    	node* curr = head;
    	node* prev;
        int ctr = 0;
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
		}
        return -1;
	}

    // TODO add the removeAll method
    int removeAll(int num) {
    	node* curr = head;
    	node* prev;
        int ctr = 0;
        int flag=0;
        int posi=0;
        while(curr){
    		if (curr->elem == num) {
                if (curr == head) {
                    head = head->next;
                    curr = head;
                } else {
                    if (curr == tail) {
                        tail = prev;
                    }
        			prev->next = curr->next;
                    curr = prev->next;
                }
                ctr++;
    			size--;
    			return ctr;
			}
			prev = curr;
			curr = curr->next;
		}

        return -1;
	}

    // DO NOT modify the code below.
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