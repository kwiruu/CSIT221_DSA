// Warning: Do not modify this file.
// Go to linkedlist.h's remove method

#include <iostream>
#include "linkedlist.h"

int main() {
	List* list = new LinkedList();
    int input;
    char op;
    do {
    	cout << "Enter op: ";
    	cin >> op;
    	switch (op) {
    		case 'a' :
		    	cin >> input;
		    	list->add(input);
		    	break;
		    case 'r':
		    	cin >> input;
                cout << "Removed position " << list->remove(input) << endl;
		    	break;
		    case 'p':
		    	list->print();
		    	break;
		    case 'x':
		    	cout << "Exiting";
		    	break;
		}
	} while (op != 'x');
    return 0;
}