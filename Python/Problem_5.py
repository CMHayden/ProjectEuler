# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

testNumber = 1
while False:
    for i in range(i, 20, +1):
        if testNumber % i == 0:
            print(testNumber)
        else:
            testNumber = testNumber + 1
