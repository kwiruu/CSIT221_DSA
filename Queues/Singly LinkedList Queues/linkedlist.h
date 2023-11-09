#include "list.h"
#include "node.h"
#include <iostream>
#include <cmath>
using namespace std;

class LinkedList : public List {
	node *head, *tail;
	int size;

public:
	void addFirst(int num) {
		// STEP 1: Create node n
		node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = num;
		// STEP 2: Connect n to head
		n->next = head;
		if (head) {
			head->prev = n;
		}
		// STEP 3: Reassign head
		head = n;
		if (!tail) {
			tail = n;
		}
		// STEP 4: Update size
		size++;
	}
	void addLast(int num) {
		// STEP 1: Create node n
		node* n = new node;
		n->elem = num;
		n->next = NULL;
		// STEP 2: Connect tail to n
		if (tail) {
			tail->next = n;
		} else {
			head = n;
		}
		n->prev = tail;
		// STEP 3: Reassign tail
		tail = n;
		// STEP 4: Update size
		size++;
	}

	void removeFirst() {
		if (!head) {
			return;
		}
		head = head->next;
		if (head) {
			free(head->prev);
			head->prev = nullptr;
		} else {
			free(tail);
			tail = nullptr;
		}
		size--;
	}

    int Size(){
        return size;
    }

	void removeLast() {
		if (!tail) {
			return;
		}
		tail = tail->prev;
		if (tail) {
			free(tail->next);
			tail->next = nullptr;
		} else {
			free(head);
			head = nullptr;
		}
		size--;
	}

	int removeAt(int pos) {
    node* x;
    node* curr = head;
    int ctr=1;
    int num;

    if (pos == 1) {
        node* temp = head;
        num = head->elem;
        removeFirst();
        return num;
    } else if (pos == size) {
        node* temp = tail;
        num = tail->elem;
        removeLast();
        return num;
    } else {
        while (ctr!=pos) {
            curr = curr->next;
            ctr++;
        }

        node* suc = curr->next;
        node* pre = curr->prev;
        num = curr->elem;
        free(curr);
        suc->prev = pre;
        pre->next = suc;

    size--;
    return num;
    }
}

	void add(int num) {
		addLast(num);
	}

	void addAt(int pos, int num) {

    node* newNode = new node;
    newNode->elem = num;

    if (pos == 1) {
        addFirst(num);
    } else if (pos == size + 1) {
        addLast(num);
    } else {
        node* curr = head;
        int ctr = 1;
        while (ctr < pos - 1) {
            curr = curr->next;
            ctr++;
        }
        node* temp = new node;
        temp->elem = num;
        temp->next = curr->next;
        temp->prev = curr;
        curr->next = temp;
        curr->next->prev = temp;

    }
    size++;
}

    // TODO implement method remove here
	int remove(int num) {
        node* curr = head;
        int ctr =1;
        while(curr!= nullptr){
            if(curr->elem == num){
                if(ctr == 1){
                removeFirst();
                return ctr;
            }
            if(ctr==size){
            removeLast();
            return ctr;
            }

    node* pred = curr->prev;
    node* succ = curr->next;
    pred->next = succ;
    succ->prev = pred;
    free(curr);
    size--;
    return ctr;
    }
    curr = curr->next;
    ctr++;
    }
    return -1;
    }

	// Tiwasi and retain

	int retain(int val){
    node* curr = head;
    int tot=0;
    int posi=1;
    while(curr != nullptr){
        if(curr->elem <= val){
            removeAt(posi);
            tot++;
        }
        else{
        curr = curr->next;
        posi++;
        }
    }
    return tot;
	}
	


	int get(int pos) {
    return head->elem;
	}

    void print() {
    	node* curr;
    	if (size == 0) {
    		cout << "Empty" << endl;
		} else {
			cout << "From HEAD: ";
    		curr = head;
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
			cout << "From TAIL: ";
    		curr = tail;
	    	while (true) {
	    		cout << curr->elem;
	    		if (curr != head) {
	    			cout << " <- ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->prev;
			}
		}
    }
};