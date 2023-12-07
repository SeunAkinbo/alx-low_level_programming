#!/usr/bin/python3

def is_palindrome(n):
    # Convert the number to a string and check if it reads the same backward
    return str(n) == str(n)[::-1]


largest_palindrome = 0

# Iterate through all possible products of two 3-digit numbers
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j

        # Check if the product is a palindrome and larger than the current largest palindrome
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
