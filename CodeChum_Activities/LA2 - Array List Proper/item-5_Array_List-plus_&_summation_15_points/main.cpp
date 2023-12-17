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
                cin >> num;
                list->remove(num);
                break;
            case '+':
                cin >> num;
                list->plus(num);
                break;
            case 'p':
                list->print();
                break;
            case 's':
                cout << "Sum: " << list->summation() << endl;
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