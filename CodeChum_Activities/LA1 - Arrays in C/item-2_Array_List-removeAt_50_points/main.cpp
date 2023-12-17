#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
    List* list = new ArrayList();
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
            case 'r':
                cin >> pos;
                cout << "Removed " << list->removeAt(pos) << endl;
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