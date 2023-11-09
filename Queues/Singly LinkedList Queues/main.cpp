#include <iostream>
#include "singlyqueue.h"

int main() {
	SinglyQueue* queue = new SinglyQueue();
    int input, res, num, pos;
    char op;
    do {
    	cout << "Enter op: ";
    	cin >> op;
    	switch (op) {
    		case 'e' :
		    	cin >> input;
		    	queue->enqueue(input);
		    	break;
		    case 'd':
                num = queue->dequeue();
				if(queue->size()==0){
					cout << "Invalid!" <<endl;
				}
				else{
					cout << "Removed " << num << endl;
				}
            	break;
			case '?':
				cout << "isEmpty " << queue->isEmpty() << endl;
				break;
			case 'f':
				cout << "First " << queue->first() << endl;
				break;
		    case 'x':
		    	cout << "Exiting";
		    	break;
		}
	} while (op != 'x');
    return 0;
}