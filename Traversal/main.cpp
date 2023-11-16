// DO NOT modify this file.
// Go to binarytree
#include <iostream>
#include "mybinarytree.h"
using namespace std;
 
int main(void) {
 
    cout <<
    "[01m[Knode.h:2:9:[m[K [01;35m[Kwarning: [m[K#pragma once in main file" << endl <<
    "    2 | #pragma [01;35m[Konce[m[K " << endl <<
    "      |         [01;35m[K^~~~[m[K" << endl << endl;
 
	BinaryTree* tree = new MyBinaryTree();
	char op;
	int input, ind;
	node* nodes[100];
	int res;
	do {
        try {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'Q':
				cin >> input;
				nodes[input] = tree->addRoot(input);
				if (nodes[input]) {
					cout << nodes[input]->elem << " added as root" << endl;
				}
				break;
			case 'L':
				cin >> input;
				cin >> ind;
				nodes[input] = tree->addLeft(nodes[ind], input);
				if (nodes[input]) {
					cout << nodes[input]->elem << " added as left of " << nodes[ind]->elem << endl;
				}
				break;
			case 'R':
				cin >> input;
				cin >> ind;
				nodes[input] = tree->addRight(nodes[ind], input);
				if (nodes[input]) {
					cout << nodes[input]->elem << " added as right of " << nodes[ind]->elem << endl;
				}
				break;
			case 'p':
				tree->print();
				break;
			case 'e':
                cout << "PREORDER: ";
				tree->preorder();
                cout << endl;
				break;
			case 'i':
                cout << "INORDER: ";
				tree->inorder();
                cout << endl;
				break;
			case 'o':
                cout << "POSTORDER: ";
				tree->postorder();
                cout << endl;
				break;
			case 'b':
                cout << "BREADTH-FIRST: ";
				tree->breadthfirst();
                cout << endl;
				break;
			case 'x':
				cout << "Exiting" << endl;
				break;
			default:
				cout << "Invalid operation" << endl;
		}
	} catch(exception& e) {
        cout << e.what() << endl;
    }
    }while (op != 'x');
 
	return 0;
}
