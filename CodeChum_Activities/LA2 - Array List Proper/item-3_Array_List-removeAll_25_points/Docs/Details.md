# Array List - removeAll
by Jay Vince Serato

The List ADT has the following operations already implemented in class:

void add(int num): Inserts num into the list.
int get(int pos): Returns the integer in the _pos_th position.
int remove(int num): Removes the first occurrence of num from the list and returns the position to which it was found.

Your task is to implement the following operations:

int removeAll(int num): Removes all instances of num from the list. Returns the total number of elements removed.

### Sample Output 1

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: a 50
    Op: p
    10 20 30 40 50
    Op: R 30
    Removed 1 element/s
    Op: p
    10 20 40 50 0
    Op: x
    Exiting...

### Sample Output 2

    Op: a 10
    Op: a 20
    Op: a 10
    Op: a 40
    Op: p
    10 20 10 40 0
    Op: R 10
    Removed 2 element/s
    Op: p
    20 40 0 0 0
    Op: x
    Exiting...

### Sample Output 3

    Op: a 15
    Op: a 25
    Op: a 40
    Op: a 50
    Op: a 25
    Op: p
    15 25 40 50 25
    Op: R 25
    Removed 2 element/s
    Op: p
    15 40 50 0 0
    Op: x
    Exiting...