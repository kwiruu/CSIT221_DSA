# Array List - removeAt
by Jay Vince Serato

The List ADT has the following operations already implemented in class:

void add(int num): Inserts num into the list.
int get(int pos): Returns the integer in the _pos_th position.
int remove(int num): Removes the first occurrence of num from the list and returns the position to which it was found.

Your task is to implement the following operations:

int removeAt(int pos): Removes the element at the _pos_th position. For this problem, assume that there is an element in the _pos_th position. This returns the removed element.

### Sample Output 1

    Op: a 10
    Op: a 20
    Op: a 30
    Op: r 1
    Removed 10
    Op: p
    20 30 0 0 0
    Op: x
    Exiting...

### Sample Output 2

    Op: a 10
    Op: a 20
    Op: a 30
    Op: p
    10 20 30 0 0
    Op: r 3
    Removed 30
    Op: p
    10 20 0 0 0
    Op: x
    Exiting...

### Sample Output 3

    Op: a 10
    Op: a 20
    Op: a 15
    Op: a 25
    Op: p
    10 20 15 25 0
    Op: r 2
    Removed 20
    Op: p
    10 15 25 0 0
    Op: a 35
    Op: p
    10 15 25 35 0
    Op: x
    Exiting...