// Warning: DO NOT modify this file.
// Go to arraylist.h.

#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
    List* list = new ArrayList();
    char ch;
    double num;
    int pos;
    do {
        cout << "Op: ";
        cin >> ch;
        switch (ch) {
            case 'a':
                cin >> num;
                list->add(num);
                break;
            case 'g':
                cin >> pos;
                cout << "Element " << pos << ": " << list->get(pos) << endl;
                break;
            case 'r':
                cin >> num;
                cout << "Removed element " << list->remove(num) << endl;
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