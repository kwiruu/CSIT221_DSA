#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

    List* list = new LinkedList();
    int num,pos;
    char input;
    cout << "List of Functions:" << endl;
    cout << "[a] - add" << endl;
    cout << "[r] - remove" << endl;
    cout << "[f] - addFirst" << endl;
    cout << "[l] - addLast" << endl;
    cout << "[F] - removeFirst" << endl;
    cout << "[L] - removeLast" << endl;
    cout << "[g] - get" << endl;
    cout << "[@] - addAt" << endl;
    cout << "[R] - removeAt" << endl;
    cout << "[p] - print" << endl;
    cout << "[x] - exit" << endl << endl;
    
    do{
        cout << "Enter a function: ";
        cin >> input;

        switch(input){
            case 'a': 
                cout << "Enter num: ";
                cin >> num;
                list->add(num);
            break;
            case 'f': 
                cout << "Enter num: ";
                cin >> num;
                list->addFirst(num);
            break;
            case 'l': 
                cout << "Enter num: ";
                cin >> num;
                list->addLast(num);
            break;
            case 'F':
                list->removeFirst();
                cout << "Removed" << endl;
            break;
            case 'L': 
                list->removeLast();
                cout << "Removed" << endl;
            break;
            case 'r':
                cout << "Enter num: ";
                cin >> num;
                list->remove(num);
            break;
            case 'g':
            cout << "Enter pos: ";
                cin >> pos;
                cout << "Value of pos " << pos << " is " << list->get(pos) << endl;
            break;
            case '@':
            cout << "Enter pos: ";
                cin >> pos;
            cout << "Enter num: ";
                cin >> num;
                list->addAt(pos, num);
            break;
            case 'R':
            cout << "Enter pos: ";
                cin >> pos;
                list->removeAt(pos);
            break;
            case 'p':
                list->print();
            break;
            case 'x':
                cout << "Exiting...";
            break;
        }
    }while(input != 'x');
    return 0;
}