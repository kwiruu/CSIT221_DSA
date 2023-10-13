#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){

    List* list = new LinkedList();


    int num, pos;
    char input;
    cout << "._________________." << endl;
    cout << "|   | FUNCTIONS   |" << endl;
    cout << "|___|_____________|" << endl;
    cout << "| f | addFirst    |" << endl;
    cout << "|___|_____________|" << endl;
    cout << "| l | addLast     |" << endl;
    cout << "|___|_____________|" << endl;
    cout << "| F | removeFirst |" << endl;
    cout << "|___|_____________|" << endl;
    cout << "| @ | addAt       |" << endl;
    cout << "|___|_____________|" << endl;
    cout << "| L | removeLast  |" << endl;
    cout << "|___|_____________|" << endl;
    cout << "| x | Exit        |" << endl;
    cout << "|___|_____________|" << endl << endl;


    do{
    cout << "Enter function: ";
    cin >> input;  
        switch(input){
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
            cout << "Removed first." << endl;
            break;
            case 'L':
            list->removeLast();
            cout << "Removed last." << endl;
            break;
            case 'p':
            list->print();
            break;
            case '@':
            cin >> pos;
            cin >> num;
            list->addAt(pos, num);
            break;
            case 'x':
            cout << "Exiting...";
            break;
        }

    }while(input!='x');

    return 0;
}