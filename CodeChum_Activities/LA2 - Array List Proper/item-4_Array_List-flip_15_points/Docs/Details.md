# Array List - flip
by Jay Vince Serato

The List ADT has the following operations already implemented in class:

void add(int num): Inserts num into the list.
int get(int pos): Returns the integer in the _pos_th position.
int remove(int num): Removes the first occurrence of num from the list and returns the position to which it was found.

Your task is to implement the following operations:

void flip(): Flips the elements. The first element becomes the last, second becomes second-to-the-last, and so on until the last element becomes the first.

### Sample Output 1

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: p
    10 20 30 40 0
    Op: f
    Op: p
    40 30 20 10 0
    Op: x
    Exiting...

### Sample Output 2

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: a 50
    Op: p
    10 20 30 40 50
    Op: f
    Op: p
    50 40 30 20 10
    Op: x
    Exiting...

### Sample Output 3

    Op: a 15
    Op: p
    15 0 0 0 0
    Op: f
    Op: p
    15 0 0 0 0
    Op: x
    Exiting...