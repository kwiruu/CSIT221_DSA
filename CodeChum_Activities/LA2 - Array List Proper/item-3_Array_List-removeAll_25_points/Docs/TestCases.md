# Test Cases

### Test case 1

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

### Test case 2

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

### Test case 3

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

### Test case 4

    Op: a 10
    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: p
    10 10 20 30 40
    Op: R 10
    Removed 2 element/s
    Op: p
    20 30 40 0 0
    Op: x
    Exiting...

### Test case 5

    Op: a 10
    Op: a 20
    Op: a 20
    Op: a 20
    Op: a 30
    Op: p
    10 20 20 20 30
    Op: R 20
    Removed 3 element/s
    Op: p
    10 30 0 0 0
    Op: x
    Exiting...

### Test case 6

    Hidden

### Test case 7

    Hidden

### Test case 8

    Hidden

### Test case 1

    Hidden

