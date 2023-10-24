// Warning: Do not modify this file.
// Create the list's and linkedlist.h's removeAll method

#include <iostream>
#include "linkedlist.h"

int main() {
    node* nodes[20];
    int size = 0;
	List* list = new LinkedList();
    int input, num;
    char op;
    do {
    	cout << "Enter op: ";
    	cin >> op;
    	switch (op) {
    		case 'a' :
		    	cin >> input;
		    	nodes[size++] = list->add(input);
		    	break;
            case 'f':
                list->flip();
                break;
		    case 'p':
		    	list->print();
                break;
            case 'c':
                cout << "Checking nodes' elements: " << endl;
                for (int i = 0; i < size; i++) {
                    cout << nodes[i]->elem << " ";
                }
                cout << endl;
		    	break;
		    case 'x':
		    	cout << "Exiting";
		    	break;
		}
	} while (op != 'x');
    return 0;
}