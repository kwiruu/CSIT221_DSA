# Array List - plus & summation
by Jay Vince Serato

The List ADT has the following operations already implemented in class:

void add(int num): Inserts num into the list.
int get(int pos): Returns the integer in the _pos_th position.
int remove(int num): Removes the first occurrence of num from the list and returns the position to which it was found.

Your task is to implement the following operations:

void plus(int term): Adds term to each of the existing elements of the list.
int summation(): Returns the sum of all the elements of the list.

### Sample Output 1

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: a 50
    Op: p
    10 20 30 40 50
    Op: + 10
    Op: p
    20 30 40 50 60
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
    Op: s
    Sum: 150
    Op: p
    10 20 30 40 50
    Op: x
    Exiting...

### Sample Output 3

    Op: a 10
    Op: a 20
    Op: p
    10 20 0 0 0
    Op: + 15
    Op: p
    25 35 0 0 0
    Op: x
    Exiting...