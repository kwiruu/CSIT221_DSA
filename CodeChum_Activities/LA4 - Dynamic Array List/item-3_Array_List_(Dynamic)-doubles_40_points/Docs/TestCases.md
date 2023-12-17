# Test Cases

### Test case 1

    Op: a 3.4
    Op: a 4.5
    Op: a 3.7
    Op: p
    3.4 4.5 3.7 ? ?
    Op: a 3
    Op: p
    3.4 4.5 3.7 3 ?
    Op: x
    Exiting...

### Test case 2

    Op: a 1.2
    Op: a 6.5
    Op: a 12.95
    Op: a 8.25
    Op: a 6.33
    Op: p
    1.2 6.5 12.95 8.25 6.33
    Op: a 1.25
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 ? ? ? ?
    Op: a 3.5
    Op: a 5.2
    Op: a 1
    Op: a 3.84
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 3.5 5.2 1 3.84
    Op: a 17.2
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 3.5 5.2 1 3.84 17.2 ? ? ? ? ? ? ? ? ?
    Op: a 28.5
    Op: a 15.175
    Op: p
    1.2 6.5 12.95 8.25 6.33 1.25 3.5 5.2 1 3.84 17.2 28.5 15.175 ? ? ? ? ? ? ?
    Op: x
    Exiting...

### Test case 3

    Op: a 1
    Op: a 2
    Op: a 3
    Op: a 4.4
    Op: a 5
    Op: p
    1 2 3 4.4 5
    Op: g 1
    Element 1: 1
    Op: g 5
    Element 5: 5
    Op: g 4
    Element 4: 4.4
    Op: x
    Exiting...

### Test case 4

    Op: a 5
    Op: a 6
    Op: a 7.7
    Op: a 8.5
    Op: a 9.2
    Op: p
    5 6 7.7 8.5 9.2
    Op: r 6
    Removed element 2
    Op: p
    5 7.7 8.5 9.2 ?
    Op: r 5
    Removed element 1
    Op: r 9.2
    Removed element 3
    Op: p
    7.7 8.5 ? ? ?
    Op: r 7.7
    Removed element 1
    Op: p
    8.5 ? ? ? ?
    Op: x
    Exiting...

### Test case 5

    Op: a 2
    Op: a 3.5
    Op: a 7.75
    Op: a 6.54
    Op: a 12.1
    Op: p
    2 3.5 7.75 6.54 12.1
    Op: r 7.75
    Removed element 3
    Op: p
    2 3.5 6.54 12.1 ?
    Op: a 12.6
    Op: p
    2 3.5 6.54 12.1 12.6
    Op: a 4.7
    Op: p
    2 3.5 6.54 12.1 12.6 4.7 ? ? ? ?
    Op: r 12.1
    Removed element 4
    Op: p
    2 3.5 6.54 12.6 4.7 ? ?
    Op: x
    Exiting...

### Test case 6

    Op: a 15.2
    Op: a 18
    Op: a 17
    Op: a 17.7
    Op: a 12.15
    Op: a 18.45
    Op: a 19.15
    Op: a 11.05
    Op: p
    15.2 18 17 17.7 12.15 18.45 19.15 11.05 ? ?
    Op: a 16.25
    Op: a 13.13
    Op: a 14.7
    Op: p
    15.2 18 17 17.7 12.15 18.45 19.15 11.05 16.25 13.13 14.7 ? ? ? ? ? ? ? ? ?
    Op: r 17
    Removed element 3
    Op: p
    15.2 18 17.7 12.15 18.45 19.15 11.05 16.25 13.13 14.7 ? ? ? ?
    Op: r 17.7
    Removed element 3
    Op: p
    15.2 18 12.15 18.45 19.15 11.05 16.25 13.13 14.7 ? ? ? ? ?
    Op: r 11.05
    Removed element 6
    Op: p
    15.2 18 12.15 18.45 19.15 16.25 13.13 14.7 ? ? ? ? ? ?
    Op: r 18
    Removed element 2
    Op: p
    15.2 12.15 18.45 19.15 16.25 13.13 14.7 ? ? ?
    Op: r 15.2
    Removed element 1
    Op: p
    12.15 18.45 19.15 16.25 13.13 14.7 ? ? ? ?
    Op: r 12.15
    Removed element 1
    Op: p
    18.45 19.15 16.25 13.13 14.7 ? ?
    Op: r 13.13
    Removed element 4
    Op: p
    18.45 19.15 16.25 14.7 ? ? ?
    Op: x
    Exiting...

### Test case 7

    Hidden

### Test case 8

    Hidden