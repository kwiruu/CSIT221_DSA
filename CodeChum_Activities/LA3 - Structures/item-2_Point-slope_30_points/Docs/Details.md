# Point - slope
by Jay Vince Serato

Given two points, it would form a line. Similar to how we can calculate the distance between two points (given in the file as reference), we should also be able to calculate the slope of the line.


In the point.h file, create the double slope(Point* other)method and return the slope of the two points. Note that the formula to get the slope is m=(y2-y1)/(x2-x1). It does not matter who the first or the second point is -- it will arrive to the same answer.


In this case of the problem, assume that the two points are not the same, for when it is, there is no line and therefore no slope.

Note that when the y-coordinates of the two points are the same, the line is horizontal and therefore the slope is zero. Also, when the x-coordinates of the two points are the same, the line is vertical and therefore the slope is infinite. This will be correctly defined in C++ as when floating-point numbers are divided by zero, C++ interprets it as inf, short for infinity.

### Sample Output 1

    Enter x of point 1: 1
    Enter y of point 1: 5
    Enter x of point 2: 7
    Enter y of point 2: 1

    The slope of the line connected by the two points is -0.666667

### Sample Output 2

    Enter x of point 1: 24
    Enter y of point 1: 16
    Enter x of point 2: 31
    Enter y of point 2: 23

    The slope of the line connected by the two points is 1

#### Sample Output 3

    Enter x of point 1: 13
    Enter y of point 1: 5
    Enter x of point 2: 4
    Enter y of point 2: 8

    The slope of the line connected by the two points is -0.333333