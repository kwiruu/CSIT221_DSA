#include "list.h"
#include <iostream>
#include "node.h"
#include <cstdlib>
using namespace std;

class DoublyLL : public List {
	node *head, *tail;
	int size;
	
public:
	void addFirst(int num) {
		// STEP 1: Create node
		node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = num;
		// STEP 2: Set n's next to head
		n->next = head;
		if (head) {
			head->prev = n;
		}
		// STEP 3: Set head to n
		head = n;
		if (!tail) {
			tail = n;
		}
		// STEP 4: Update size
		size++;
	}
	
	void addLast(int num) {
		// STEP 1: Create the node...
		node* n = new node;
		n->elem = num;
		n->next = NULL;
		// STEP 2: If tail...
		n->prev = tail;
		if (tail) {
			tail->next = n;
		} else {
			head = n;
		}
		// STEP 3: Set tail to n
		tail = n;
		// STEP 4: Update size
		size++;
	}
	
	void removeFirst() {
		if (size == 0) {
			return;
		}
		head = head->next;
		if (head) {	
			free(head->prev);
			head->prev = NULL;
		} else {
			free(tail);
			tail = NULL;
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
			tail->next = NULL;
		} else {
			free(head);
			head = NULL;
		}
		size--;
	}
	
	void add(int num) {
		addFirst(num);
	}
	
	int get(int pos) {
		node* curr = head;
		int ctr = 1;
		while (ctr != pos) {
			curr = curr->next;
			ctr++;
		}
		return curr->elem;
	}
	
	
	
	void addAt(int pos, int num) {
    if (pos < 1 || pos > size + 1) {
        // Invalid position, do nothing
        return;
    }

    // Create a new node
    node* newNode = new node;
    newNode->elem = num;

    if (pos == 1) {
        // Adding at the beginning
        newNode->next = head;
        newNode->prev = NULL;

        if (head) {
            head->prev = newNode;
        } else {
            // If the list was empty, update tail
            tail = newNode;
        }
        head = newNode;
    } else if (pos == size + 1) {
        // Adding at the end
        newNode->next = NULL;
        newNode->prev = tail;

        if (tail) {
            tail->next = newNode;
        } else {
            // If the list was empty, update head
            head = newNode;
        }
        tail = newNode;
    } else {
        // Adding at a specific position
        node* curr = head;
        int ctr = 1;
        while (ctr < pos - 1) {
            curr = curr->next;
            ctr++;
        }

        newNode->next = curr->next;
        newNode->prev = curr;
        curr->next = newNode;
        newNode->next->prev = newNode;
    }

    // Update the size
    size++;
}

	void removeAt(int pos) {
    if (pos < 1 || pos > size) {
        // Invalid position, do nothing
        return;
    }

    if (pos == 1) {
        // Removing the first element
        node* temp = head;
        head = head->next;
        if (head) {
            head->prev = NULL;
        } else {
            // If the list becomes empty, update tail
            tail = NULL;
        }
        free(temp);
    } else if (pos == size) {
        // Removing the last element
        node* temp = tail;
        tail = tail->prev;
        if (tail) {
            tail->next = NULL;
        } else {
            // If the list becomes empty, update head
            head = NULL;
        }
        free(temp);
    } else {
        // Removing at a specific position
        node* curr = head;
        int ctr = 1;
        while (ctr < pos) {
            curr = curr->next;
            ctr++;
        }

        node* temp = curr->next;
        curr->next = temp->next;
        temp->next->prev = curr;
        free(temp);
    }

    // Update the size
    size--;
}

	
	void print() {
		cout << "Size: " << size << endl;
		node* curr = head;
		cout << "From HEAD: ";
		while (curr) {
			cout << curr->elem << "->";
			curr = curr->next;
		}
		curr = tail;
		cout << endl << "From TAIL: ";
		while (curr) {
			cout << curr->elem << "<-";
			curr = curr->prev;
		}
		cout << endl;
	}
};
