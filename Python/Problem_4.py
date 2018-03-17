#A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

#Find the largest palindrome made from the product of two 3-digit numbers.

palindrome = 0
for rand1 in range(999, 100, -1):
    for rand2 in range(rand1, 100, -1):
        x = rand1 * rand2
        if x > palindrome:
            string = str(rand1 * rand2)
            if string == string[::-1]:
                 palindrome = rand1 * rand2
print (palindrome)
