// Warning: Do not modify this file.
// Go and create list.h's and linkedlist.h's addAt method

#include <iostream>
#include "linkedlist.h"
using namespace std;

int main() {
    List* list = new LinkedList();
    char ch;
    int num, pos;
    do {
        cout << "Op: ";
        cin >> ch;
        switch (ch) {
            case 'a':
                cin >> num;
                list->add(num);
                break;
            case '@':
                cin >> num >> pos;
                list->addAt(num, pos);
                break;
            case 'p':
                list->print();
                break;
            case 'x':
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid operation" << endl;
        }
    } while (ch != 'x');
    return 0;
}