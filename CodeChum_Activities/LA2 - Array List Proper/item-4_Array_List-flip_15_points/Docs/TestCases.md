# Test Cases

### Test case 1

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

### Test case 2

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

### Test case 3

    Op: a 15
    Op: p
    15 0 0 0 0
    Op: f
    Op: p
    15 0 0 0 0
    Op: x
    Exiting...

### Test case 4

    Op: a 10
    Op: a 20
    Op: a 30
    Op: p
    10 20 30 0 0
    Op: f
    Op: p
    30 20 10 0 0
    Op: f
    Op: p
    10 20 30 0 0
    Op: x
    Exiting...

### Test case 5

    Hidden