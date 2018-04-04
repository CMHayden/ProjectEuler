#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
#Find the sum of all the multiples of 3 or 5 below 1000.

multiplesOf3 = 3
counterFor3 = 0
multiplesOf5 = 5
counterFor5 = 0
multiplesOf15 = 15
counterOf15 = 0
while (multiplesOf3 < 1000):
    counterFor3 += multiplesOf3
    multiplesOf3 +=3
while (multiplesOf5 < 1000):
    counterFor5 += multiplesOf5
    multiplesOf5 +=5
while (multiplesOf15 < 1000):
    counterOf15 += multiplesOf15
    multiplesOf15 +=15
print(counterFor3 + counterFor5 -counterOf15)
