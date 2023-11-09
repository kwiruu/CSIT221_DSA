#include <iostream>
#include "arraylistqueues.h"
using namespace std;

int main() {
    ArrayQueues* queue = new ArrayQueues();
    char ch;
    int num, rem;
    do {
        cout << "Op: ";
        cin >> ch;
        switch (ch) {
            case 'e':
                cin >> num;
                queue->enqueue(num);
                break;
            case 'd':
                rem = queue->dequeue();
                
                if(rem == 0){
                    cout << "Invalid" << endl;
                }
                else{
                    cout << "Removed " << rem << endl;
                }
                
                break;
            case 'f':
                cout << "First is " << queue->first() << endl;
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