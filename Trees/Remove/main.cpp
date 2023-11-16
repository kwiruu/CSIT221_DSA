// DO NOT modify this file.
// Go to binarytree and mybinarytree
#include <iostream>
#include "mybinarytree.h"
using namespace std;
 
int main(void) {
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
            case '-':
                cin >> ind;
                res = tree->remove(nodes[ind]);
                cout << "Removed " << res << endl;
                break;
			case 'p':
				tree->print();
				break;
			case 'x':
				cout << "Exiting" << endl;
				break;
			default:
				cout << "Invalid operation" << endl;
		}
	}catch (exception& e) {
        cout << e.what() << endl;
    }
    }while (op != 'x');
 
	return 0;
}