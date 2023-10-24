#include <iostream>
#include "linkedlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	CircularLL* list = new CircularLL();
	char op;
	int num;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'f':
				cin >> num;
				list->addFirst(num);
				break;
			case 'l':
				cin >> num;
				list->addLast(num);
				break;
			case 'p':
				list->print();
				break;
			case 'r':
				cout << "Removed " << list->removeFirst() << endl;
				break;
			case 't':
				cout << "Tail: " << list->getTail() << endl;
				break;
			case 'O':
				list->rotate();
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
	} while (op != 'x');
	return 0;
}