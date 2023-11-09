#include <iostream>
#include "list.h"
using namespace std;

class ArrayList : public List {
    int array[100];
    int size;

    public:
    ArrayList(){
        array[100];
        size = 0;
    }

    void addLast(int num) {
            array[size++] = num;
    }

    int remove() {
        // Step 1: FIND the num
        int num = array[0];
        for (int i = 0; i < size; i++) {
                // Step 2: MOVE the elements to left
                for (int j = i; j < size-1; j++) {
                    array[j] = array[j+1];
                }
                // Step 3: Set the size
                array[size-1] = 0;
                size = size-1;
                // Step 4: Return
                return num;
            }
        return num;
    }

    int get(int pos) {
        return array[pos-1];
    }

    int Size(){
        return size;
    }

    void print() {
    }
};