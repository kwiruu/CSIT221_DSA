#include <iostream>
#include "doublyqueue.h"
using namespace std;

int main() {

    DoublyQueue* que = new DoublyQueue();
    int num,pos,left,right;
    char input;
    cout << "List of Functions:" << endl;
    cout << "[f] - enqueueFirst" << endl;
    cout << "[l] - enqueueLast" << endl;
    cout << "[F] - dequeueFirst" << endl;
    cout << "[L] - dequeueLast" << endl;
    cout << "[g] - first" << endl;
    cout << "[?] - isEmpty" << endl;
    cout << "[s] - size" << endl;
    cout << "[p] - print (doesn't exist in stack)" << endl;
    cout << "[x] - exit" << endl << endl;
    
    do{
        cout << "Enter a function: ";
        cin >> input;

        switch(input){
            break;
            case 'd':
                cout << "Removed " << que->dequeueFirst() << endl;
            break;
            case 'e':
                cin >> num;
                que->enqueueLast(num);
            break;
            case 'f': 
                cin >> num;
                que->enqueueFirst(num);
            break;
            case 'l': 
                cin >> num;
                que->enqueueLast(num);
            break;
            case 'F':
                cout << "Removed " << que->dequeueFirst() << endl;
            break;
            case 'L': 
                cout << "Removed " << que->dequeueLast() << endl;
            break;
            case 'g':
                cout << "First is: " << que->first() << endl;
            break;
            case '?':
                cout << "isEmpty " << que->isEmpty() << endl;
            break;
            case 's':
                cout << "Size: "<< que->size() << endl;
            break;
            case 'p':
                que->prints();
            break;
            case 'x':
                cout << "Exiting...";
            break;
        }
    }while(input != 'x');
    return 0;
}