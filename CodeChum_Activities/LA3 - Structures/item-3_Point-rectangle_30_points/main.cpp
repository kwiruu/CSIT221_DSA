#include <iostream>
#include "rectangle.h"

using namespace std;

int main(){

	Rectangle rect;

	cout << "Enter x of rectangle point 1: ";
	cin >> rect.p1.x;
	cout << "Enter y of rectangle point 1: ";
	cin >> rect.p1.y;
	cout << "Enter x of rectangle point 2: ";
	cin >> rect.p2.x;
	cout << "Enter y of rectangle point 2: ";
	cin >> rect.p2.y;

	cout << endl << "Perimeter of the rectangle: " << rect.perimeter() << endl;
	cout << "Area of the rectangle: " << rect.area();



}