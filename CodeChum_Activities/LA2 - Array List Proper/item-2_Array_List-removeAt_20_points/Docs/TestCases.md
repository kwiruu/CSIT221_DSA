# Test Cases

### Test case 1

    Op: a 10
    Op: a 20
    Op: a 30
    Op: r 1
    Removed 10
    Op: p
    20 30 0 0 0
    Op: x
    Exiting...

### Test case 2

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

### Test case 3

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

### Test case 4

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: p
    10 20 30 40 0
    Op: r 1
    Removed 10
    Op: p
    20 30 40 0 0
    Op: r 1
    Removed 20
    Op: p
    30 40 0 0 0
    Op: r 2
    Removed 40
    Op: p
    30 0 0 0 0
    Op: x
    Exiting...

### Test case 5

    Hidden

### Test case 6

    Hidden

### Test case 7

    Hidden