// Warning: Do not modify this file.
// Create the list's and linkedlist.h's removeAt method

#include <iostream>
#include "linkedlist.h"

int main() {
	List* list = new LinkedList();
    int input, pos;
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
                cin >> pos;
                cout << "Removed " << list->removeAt(pos) << endl;
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