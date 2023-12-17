# Array List (Dynamic) - removeAt
by Jay Vince Serato

The List ADT has the following operations already implemented in class:

void add(int num): Inserts num into the list.
int get(int pos): Returns the integer in the _pos_th position.
int remove(int num): Removes the first occurrence of num from the list and returns the position to which it was found.

Your task is to implement the following operations on a Dynamic Array List:

int removeAt(int pos): Removes the element at the _pos_th position. For this problem, assume that there is an element in the _pos_th position. This returns the removed element.

Note that when the number of elements reach 2/3 of the capacity, you are to reallocate the array by reducing its size by 25%, similar to what is done in the remove method. Additionally, add the functionality to maintain a minimum capacity of 5. This will be true for any methods that remove elements from the array list.

### Sample Output 1

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: a 50
    Op: a 60
    Op: a 70
    Op: a 80
    Op: a 90
    Op: p
    10 20 30 40 50 60 70 80 90 ? ? ?
    Op: r 5
    Removed 50
    Op: p
    10 20 30 40 60 70 80 90 ?
    Op: x
    Exiting...

### Sample Output 2

    Op: a 10
    Op: a 20
    Op: p
    10 20 ? ? ?
    Op: r 1
    Removed 10
    Op: p
    20 ? ? ? ?
    Op: r 1
    Removed 20
    Op: p
    ? ? ? ? ?
    Op: x
    Exiting...

### Sample Output 3

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: a 50
    Op: a 60
    Op: a 70
    Op: a 80
    Op: a 90
    Op: a 100
    Op: a 110
    Op: p
    10 20 30 40 50 60 70 80 90 100 110 ?
    Op: r 2
    Removed 20
    Op: p
    10 30 40 50 60 70 80 90 100 110 ? ?
    Op: r 7
    Removed 80
    Op: p
    10 30 40 50 60 70 90 100 110 ? ? ?
    Op: r 1
    Removed 10
    Op: p
    30 40 50 60 70 90 100 110 ?
    Op: x
    Exiting...