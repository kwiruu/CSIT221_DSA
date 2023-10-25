#include <iostream>
#include "linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DoublyLL* list1 = new DoublyLL();
	DoublyLL* list2 = new DoublyLL();
	DoublyLL* list = list1;
	char op;
	int num, pos;
	cout << "Operating on list1" << endl;
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
			case 'F':
				list->removeFirst();
				break;
			case 'L':
				list->removeLast();
				break;
			case 'c':
				if (list == list1) {
					cout << "Combining on list1" << endl;
					list1->combine(list2);
				} else {
					cout << "Combining on list2" << endl;
					list2->combine(list1);
				}
				break;
			case 'd':
				if (list == list1) {
					cout << "Operating on list2" << endl;
					list = list2;
				} else {
					cout << "Operating on list1" << endl;
					list = list1;
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