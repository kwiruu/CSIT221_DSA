# Array List (Dynamic) - doubles
by Jay Vince Serato

The List ADT has the following operations that you are to implemented, this time storing elements of data type double instead of _int_s:

void add(double num): Inserts num into the list.
double get(int pos): Returns the integer in the _pos_th position.
int remove(double num): Removes the first occurrence of num from the list and returns the position to which it was found. Returns -1 if the num does not exist.

Initially, the array should have a capacity of 5. Create the array using malloc or calloc in the constructor.

Note that when the array is already full, you are to dynamically allocate memory and this time, double the size instead of 50%. Also, when the number of elements are currently less than or equal to half its capacity, reduce the capacity to 70% rounded up. Maintain the minimum capacity of 5. You may add your own methods here, similar to the one in the dynamic array list. Make sure to also set them as private since we don't want other classes to gain access to these.

### Sample Output 1

    Op: a 3.4
    Op: a 4.5
    Op: a 3.7
    Op: p
    3.4 4.5 3.7 ? ?
    Op: a 3
    Op: p
    3.4 4.5 3.7 3 ?
    Op: x
    Exiting...

### Sample Output 2

    Op: a 1.2
    Op: a 6.5
    Op: a 12.95
    Op: a 8.25
    Op: a 6.33
    Op: p
    1.2 6.5 12.95 8.25 6.33
    Op: a 1.25
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 ? ? ? ?
    Op: a 3.5
    Op: a 5.2
    Op: a 1
    Op: a 3.84
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 3.5 5.2 1 3.84
    Op: a 17.2
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 3.5 5.2 1 3.84 17.2 ? ? ? ? ? ? ? ? ?
    Op: a 28.5
    Op: a 15.175
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 3.5 5.2 1 3.84 17.2 28.5 15.175 ? ? ? ? ? ? ?
    Op: x
    Exiting...

### Sample Output 3

    Op: a 1
    Op: a 2
    Op: a 3
    Op: a 4.4
    Op: a 5
    Op: p
    1 2 3 4.4 5
    Op: g 1
    Element 1: 1
    Op: g 5
    Element 5: 5
    Op: g 4
    Element 4: 4.4
    Op: x
    Exiting...