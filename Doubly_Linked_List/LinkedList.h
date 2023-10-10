#include "list.h"
#include "node.h"
#include <iostream>
#include <cmath>
using namespace std;

class LinkedList : public List {
    node *tail, *head;
    int size;

public:
    void addFirst(int num) {
		// STEP 1: Create node n
		node* n = (node*) calloc( 1, sizeof(node) );
		n->ram = num;
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
		n->ram = num;
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

    void add(int num){
        addLast(num);
    }

    int remove(int num){
        node* curr = head;
        int ctr=1;

        while(curr != nullptr){
            if(curr->ram == num){
                if(ctr==1){
                    removeFirst();
                    return ctr;
                }
                if(ctr==size){
                    removeLast();
                    return ctr;
                }
            
            node* suc = curr->next;
            node* pre = curr->prev;
            pre->next = suc;
            suc ->prev = pre;
            free(curr);
            size--;
            return ctr;
            }
            curr = curr->next;
            ctr++;
        }
        return -1;
    }

    int get(int pos){
        node* curr = head;
        int ctr=1;
        while(ctr != pos){
           return curr->ram;
        }
        curr = curr->next;
        ctr++;
        return -1;
    }

    void addAt(int pos, int num){
        node* newNode = new node;
        newNode->ram = num;

            if(pos == 1){
                addFirst(num);
            }
            else if(pos == size+1){
                addLast(num);
            }
            else{   
                node* curr = head;
                int ctr=1;
                while(ctr < pos-1){
                    curr = curr->next;
                    ctr++;
                }
                    node* temp = new node;
                    temp->ram = num;
                    temp->next = curr->next;
                    temp->prev = curr;
                    curr->next = temp;
                    curr->next->prev = temp;

            }
            size++;
    }

    void removeAt(int pos){
        node* curr = head;
        int ctr=1;

        while(ctr != size){
            if(ctr == pos){
                if(ctr==1){
                    removeFirst();
                }
                if(ctr==size){
                    removeLast();
                }
            
            node* suc = curr->next;
            node* pre = curr->prev;
            pre->next = suc;
            suc ->prev = pre;
            free(curr);
            size--;
            }
            curr = curr->next;
            ctr++;
        }
    }

    void print() {
    	node* curr;
    	if (size == 0) {
    		cout << "Empty" << endl;
		} else {
			cout << "From HEAD: ";
    		curr = head;
	    	while (true) {
	    		cout << curr->ram;
	    		if (curr != tail) {
	    			cout << " | -> | ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->next;
			}
			cout << "From TAIL: ";
    		curr = tail;
	    	while (true) {
	    		cout << curr->ram;
	    		if (curr != head) {
	    			cout << " | <- | ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->prev;
			}
		}
    }

};