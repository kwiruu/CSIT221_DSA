#include <iostream>
#include "linkedlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DoublyLL* list = new DoublyLL();
	char op;
	int num, pos;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin >> num;
				pos = list->add(num);
				if (pos == 1) {
					cout << "Added from head" << endl;
				} else {
					cout << "Added from tail" << endl;
				}
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