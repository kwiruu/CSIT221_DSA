#include "list.h"
#include <iostream>
#include "node.h"
using namespace std;

class DoublyLL : public List {
	node *head, *tail;
	int size;

	void addBetween(int num, node* pred, node* succ) {
		node* n = (node*) malloc( sizeof(node) );
		n->elem = num;
		n->next = succ;
		n->prev = pred;
		pred->next = n;
		succ->prev = n;
		size++;
	}

	void removeNode(node* n) {
            node* curr = n;
            node* temp = new node;

            if(size==0){
                return;
            }

            if(n->prev != nullptr){
                tail = tail->prev;
        		if (tail) {
        			free(tail->next);
        			tail->next = nullptr;
        		} else {
        			free(head);
        			head = nullptr;
        		}
        		size--;
                return;
            }
            else if(n->next != nullptr){
                        head = head->next;
        		if (head) {
        			free(head->prev);
        			head->prev = nullptr;
        		} else {
        			free(tail);
        			tail = nullptr;
        		}
        		size--;
                return;
            }
	}

public:
	DoublyLL() {
		head = (node*) calloc(1, sizeof(node));
		tail = (node*) calloc(1, sizeof(node));
		head->next = tail;
		tail->prev = head;
		size = 0;
	}

	void addFirst(int num) {
		addBetween(num, head, head->next);
	}

	void addLast(int num) {
		addBetween(num, tail->prev, tail);
	}

	void removeFirst() {
        // TODO revise to only call removeNode(node*)
		removeNode(head);
	}

	void removeLast() {
       removeNode(tail);
	}

	void add(int num) {
		addFirst(num);
	}

	int get(int pos) {
        // IGNORE
        return 0;
	}

	int remove(int num) {
        // IGNORE
        return 0;
	}

	void print() {
		cout << "Size: " << size << endl;
		node* curr = head->next;
		cout << "From HEAD: ";
		while (curr != tail) {
			cout << curr->elem;
			curr = curr->next;
            if (curr != tail) {
                cout << "->";
            }
		}
		curr = tail->prev;
		cout << endl << "From TAIL: ";
		while (curr != head) {
			cout << curr->elem;
			curr = curr->prev;
            if (curr != head) {
                cout << "<-";
            }
		}
		cout << endl;
	}
};