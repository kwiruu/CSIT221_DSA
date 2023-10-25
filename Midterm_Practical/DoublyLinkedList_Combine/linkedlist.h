#include <iostream>
#include <cstdlib>
#include "list.h"
#include "node.h"
using namespace std;

class DoublyLL : public List {
	node *head, *tail;
	int size;

public:
	void combine(DoublyLL* other) {
        if(other->size==0){
        return;
        }
        if(size==0){
        head = other->head;
        }
        else{
        tail->next = other->head;
        other->head->prev = tail;
        }
        tail = other->tail;
        other->head = NULL;
        other->tail = NULL;
        size = size + other->size;
        other->size = 0;
	}

	void addFirst(int num) {
		// Create the node
		node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = num;
		// Step 2: Set the n's next to head
		n->next = head;
		if (head) {
			head->prev = n;
		}
		// Step 3: Head to n
		head = n;
		if (!tail) {
			tail = n;
		}
		// Step 4: Inc size
		size++;
	}

	void addLast(int num) {
		// STEP 1: Create node
		node* n = (node*) malloc( sizeof(node) );
		n->elem = num;
		n->next = nullptr;
		n->prev = tail;
		// STEP 2: Tail's next = n
		if (tail) {
			tail->next = n;
		} else {
			head = n;
		}
		// STEP 3: Tail = n
		tail = n;
		// STEP 4: Increment size
		size++;
	}

	void add(int num) {
		addLast(num);
	}

	int get(int pos) {
		node* curr = head;
		int ctr = 1;
		while (ctr < pos) {
			curr = curr->next;
			ctr++;
		}
		return curr->elem;
	}

	int remove(int num) {
		node* curr = head;
		int pos = 1;
		while (curr) {
			if (curr->elem == num) {
				if (pos == 1) {
					removeFirst();
					return pos;
				}
				if (pos == size) {
					removeLast();
					return pos;
				}
				node* pred = curr->prev;
				node* succ = curr->next;
				pred->next = succ;
				succ->prev = pred;
				free(curr);
				size--;
				return pos;
			}
			curr = curr->next;
			pos++;
		}
	}

	void removeFirst() {
		if (size == 0) {
			return;
		}
		head = head->next;
		if (head) {
			free(head->prev);
			head->prev = nullptr;
		} else {
			tail = nullptr;
		}
		size--;
	}

	void removeLast() {
		if (size == 0) {
			return;
		}
		tail = tail->prev;
		if (tail) {
			free(tail->next);
			tail->next = nullptr;
		} else {
			head = nullptr;
		}
		size--;
	}

	void print() {
		node* curr = head;
		cout << "Size: " << size << endl;
		cout << "FROM HEAD: ";
		while (curr != nullptr) {
			cout << curr->elem;
			curr = curr->next;
			if (curr != nullptr) {
				cout << "->";
			}
		}
		curr = tail;
		cout << endl << "FROM TAIL: ";
		while (curr != nullptr) {
			cout << curr->elem;
			curr = curr->prev;
			if (curr != nullptr) {
				cout << "<-";
			}
		}
		cout << endl;
	}

};