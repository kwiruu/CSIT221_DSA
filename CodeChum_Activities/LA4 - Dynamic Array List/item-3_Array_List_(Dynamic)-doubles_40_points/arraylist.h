#include <iostream>
#include <cstdlib>
#include <math.h>
#include "list.h"
using namespace std;

class ArrayList : public List {
    double* array;
    int size;
    int capacity = 5;

    public:
    // constructor
    ArrayList() {
        array = (double*) calloc( capacity , sizeof(double) );
        size = 0;
    }

    void add(double num) {

		if (size >= capacity) {
        		double new_size = ceil(capacity * 2);
        		double* new_array = (double*) realloc(array, sizeof(double) * new_size);
        		array = new_array;
        		capacity = new_size;
		}
		array[size++] = num;
    }

    int remove(double num) {
        for (int i = 0; i < size; i++) {
            if (array[i] == num) {

                for (int j = i; j < size-1; j++) {
                    array[j] = array[j+1];
                }

                array[size-1] = 0;
                size = size-1;

                if (size <= 2.0/4 * capacity && capacity != 5) {
                	double new_size = ceil(capacity * 0.70);
            		double* new_array = (double*) realloc(array, sizeof(double) * new_size);
            		array = new_array;
            		capacity = new_size;
				}

                return i+1;
            }
        }
        return -1;
    }

    double get(int pos) {
        return array[pos-1];
    }

    void print() {
        int i;
        for (i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        for (; i < capacity; i++) {
            cout << "? ";
        }
        cout << endl;
    }
};