#include <iostream>
#include <cstdlib>
#include <math.h>
#include "list.h"
using namespace std;
 
class ArrayList : public List {
    node** array;
    int size;
    int capacity = 5;
 
	void dynamic_add() {
		int new_size = ceil(capacity * 1.5);
		array = (node**) realloc(array, sizeof(node*) * new_size);
//		array = new_array;
		capacity = new_size;
	}
 
	void dynamic_deduce() {
		int new_size = ceil(capacity * 0.75);
		node** new_array = (node**) realloc(array, sizeof(node*) * new_size);
		array = new_array;
		capacity = new_size;
	}
 
    public:
    // constructor
    ArrayList() {
    	array = (node**) calloc( capacity, sizeof(node*) );
        size = 0;
    }
 
    void add(node* num) {
    	if (size == capacity) {
    		dynamic_add();
		}
		array[size++] = num;
    }
 
    int _size() {
    	return size;
	}
 
    node* removeLast() {
    	return array[--size];
	}
 
	node* removeFirst() {
		node* num = array[0];
				// Step 2: MOVE the elements to left
                for (int j = 0; j < size-1; j++) {
                    array[j] = array[j+1];
                }
                // Step 3: Set the size
                array[size-1] = 0;
                size = size-1;
                // Step 4: Check to reduce capacity
                if (size <= 2.0/3 * capacity) {
                	dynamic_deduce();
				}
                // Step 5: Return
                return num;
	}
 
    int remove(node* num) {
        // Step 1: FIND the num
        for (int i = 0; i < size; i++) {
            if (array[i] == num) {
                // Step 2: MOVE the elements to left
                for (int j = i; j < size-1; j++) {
                    array[j] = array[j+1];
                }
                // Step 3: Set the size
                array[size-1] = 0;
                size = size-1;
                // Step 4: Check to reduce capacity
                if (size <= 2.0/3 * capacity) {
                	dynamic_deduce();
				}
                // Step 5: Return
                return i+1;
            }
        }
        return -1;
    }
 
    node* get(int pos) {
        return array[pos-1];
    }
 
    void print() {
   		int i;
        for (i = 0; i < size; i++) {
            cout << array[i]->elem << " ";
        }
        for (; i < capacity; i++) {
            cout << "? ";
		}
        cout << endl;
    }
};