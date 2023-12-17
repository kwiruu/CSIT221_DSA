# Test Cases

### Test case 1

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

### Test case 2

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

### Test case 3

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

### Test case 4

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: a 50
    Op: a 60
    Op: a 70
    Op: a 80
    Op: a 90
    Op: a 110
    Op: a 100
    Op: p
    10 20 30 40 50 60 70 80 90 110 100 ?
    Op: r 1
    Removed 10
    Op: r 1
    Removed 20
    Op: p
    30 40 50 60 70 80 90 110 100 ? ? ?
    Op: r 1
    Removed 30
    Op: p
    40 50 60 70 80 90 110 100 ?
    Op: r 1
    Removed 40
    Op: p
    50 60 70 80 90 110 100 ? ?
    Op: r 1
    Removed 50
    Op: p
    60 70 80 90 110 100 ?
    Op: r 1
    Removed 60
    Op: p
    70 80 90 110 100 ? ?
    Op: r 1
    Removed 70
    Op: p
    80 90 110 100 ? ?
    Op: r 1
    Removed 80
    Op: p
    90 110 100 ? ?
    Op: r 1
    Removed 90
    Op: p
    110 100 ? ? ?
    Op: r 1
    Removed 110
    Op: p
    100 ? ? ? ?
    Op: r 1
    Removed 100
    Op: p
    ? ? ? ? ?
    Op: x
    Exiting...

### Test case 5

    Op: a 15
    Op: a 25
    Op: a 35
    Op: a 45
    Op: a 55
    Op: a 65
    Op: p
    15 25 35 45 55 65 ? ?
    Op: r 6
    Removed 65
    Op: p
    15 25 35 45 55 ?
    Op: a 70
    Op: p
    15 25 35 45 55 70
    Op: a 80
    Op: p
    15 25 35 45 55 70 80 ? ?
    Op: r 2
    Removed 25
    Op: p
    15 35 45 55 70 80 ?
    Op: r 4
    Removed 55
    Op: p
    15 35 45 70 80 ? ?
    Op: r 5
    Removed 80
    Op: p
    15 35 45 70 ? ?
    Op: r 1
    Removed 15
    Op: p
    35 45 70 ? ?
    Op: x
    Exiting...

### Test case 6

    Hidden

### Test case 7

    Hidden