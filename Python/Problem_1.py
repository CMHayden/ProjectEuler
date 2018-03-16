#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
#Find the sum of all the multiples of 3 or 5 below 1000.

x = 3
y = 0
a = 5
b = 0
while (x < 1000):
    y+=x
	x+=3
while (a < 1000):
    b+=a
    a+=5
print(y+b)
