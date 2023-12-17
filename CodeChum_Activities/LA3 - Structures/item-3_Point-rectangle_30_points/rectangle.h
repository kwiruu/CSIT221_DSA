#include <iostream>
#include "point.h"
#include <math.h>

struct Rectangle{

	Point p1;
	Point p2;

	int area(){

		int l = abs(p1.x - p2.x);
		int w = abs(p1.y - p2.y);
		return (l*w);
	}
	int perimeter(){
		int l = abs(p1.x - p2.x);
		int w = abs(p1.y - p2.y);
		return (2*(l+w));
	}
};