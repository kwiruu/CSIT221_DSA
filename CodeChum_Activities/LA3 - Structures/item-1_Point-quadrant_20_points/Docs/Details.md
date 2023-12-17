# Point - quadrant
by Jay Vince Serato

In a 2-dimensional plane, a point is located on a quadrant depending on the values of x and y.


Quadrant 1 - x is positive, y is positive
Quadrant 2 - x is negative, y is positive
Quadrant 3 - x is negative, y is negative
Quadrant 4 - x is positive, y is negative

In the point.h file, create the int quadrant() method and return the quadrant of the point. Note that if the point lies on the x- or the y- axis exclusively, return -1 to indicate that it is lying on the axes. If the point is in the origin (i.e. the point's coordinate is (0, 0) ), return 0 to indicate that it is in the origin.

### Sample Output 1

    Enter x of point: 5
    Enter y of point: 10

    The point belongs to Quadrant 1

### Sample Output 2

    Enter x of point: -4
    Enter y of point: -8

    The point belongs to Quadrant 3

### Sample Output 3

    Enter x of point: 0
    Enter y of point: 0

    The point is in the origin