// Warning: DO NOT MODIFY THIS FILE.
// Doing so will nullify your score to this problem.

#include <iostream>
#include "point.h"
using namespace std;

int main() {
    Point point1;
    cout << "Enter x of point: ";
    cin >> point1.x;
    cout << "Enter y of point: ";
    cin >> point1.y;

    int res = point1.quadrant();
    switch (res) {
        case 0:
            cout << endl << "The point is in the origin" << endl;
            break;
        case -1:
            cout << endl << "The point is in the axis" << endl;
            break;
        default:
            cout << endl << "The point belongs to Quadrant " << point1.quadrant() << endl;
    }
    return 0;
}