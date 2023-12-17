# Test Cases

### Test case 1

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

### Test case 2

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

### Test case 3

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

### Test case 4

    Op: a 10
    Op: a 20
    Op: a 30
    Op: a 40
    Op: a 50
    Op: @ 60 6
    Op: p
    10 20 30 40 50 60 ? ?
    Op: @ 70 7
    Op: @ 80 8
    Op: p
    10 20 30 40 50 60 70 80
    Op: @ 90 9
    Op: p
    10 20 30 40 50 60 70 80 90 ? ? ?
    Op: @ 100 10
    Op: @ 110 11
    Op: @ 120 12
    Op: p
    10 20 30 40 50 60 70 80 90 100 110 120
    Op: @ 130 13
    Op: p
    10 20 30 40 50 60 70 80 90 100 110 120 130 ? ? ? ? ?
    Op: x
    Exiting...

### Test case 5

    Op: a 10
    Op: a 30
    Op: a 40
    Op: a 50
    Op: p
    10 30 40 50 ?
    Op: @ 20 2
    Op: p
    10 20 30 40 50
    Op: @ 35 4
    Op: p
    10 20 30 35 40 50 ? ?
    Op: a 55
    Op: p
    10 20 30 35 40 50 55 ?
    Op: x
    Exiting...

### Test case 6

    Hidden