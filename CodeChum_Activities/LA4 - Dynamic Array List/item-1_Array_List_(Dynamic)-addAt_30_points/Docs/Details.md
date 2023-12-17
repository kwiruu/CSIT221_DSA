# Array List (Dynamic) - addAt
by Jay Vince Serato

The List ADT has the following operations already implemented in class:

void add(int num): Inserts num into the list.
int get(int pos): Returns the integer in the _pos_th position.
int remove(int num): Removes the first occurrence of num from the list and returns the position to which it was found.

Your task is to implement the following operations on a Dynamic Array List:

void addAt(int num, int pos): Inserts num as the _pos_th position in the list. For this problem, assume that the value of pos will always be valid.

Note that when the array is already full, you are to dynamically allocate memory similar to the add method, to accommodate the additional num entry.

### Sample Output 1

    Op: a 10
    Op: a 20
    Op: a 40
    Op: a 50
    Op: a 60
    Op: p
    10 20 40 50 60
    Op: @ 30 3
    Op: p
    10 20 30 40 50 60 ? ?
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
    Op: @ 60 6
    Op: p
    10 20 30 40 50 60 ? ?
    Op: x
    Exiting...

### Sample Output 3

    Op: a 10
    Op: a 50
    Op: p
    10 50 ? ? ?
    Op: @ 30 2
    Op: @ 40 3
    Op: p
    10 30 40 50 ?
    Op: @ 20 2
    Op: p
    10 20 30 40 50
    Op: @ 45 5
    Op: p
    10 20 30 40 45 50 ? ?
    Op: @ 15 2
    Op: p
    10 15 20 30 40 45 50 ?
    Op: @ 25 4
    Op: p
    10 15 20 25 30 40 45 50
    Op: @ 35 6
    Op: p
    10 15 20 25 30 35 40 45 50 ? ? ?
    Op: x
    Exiting...