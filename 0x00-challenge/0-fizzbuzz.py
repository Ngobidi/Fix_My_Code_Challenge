#!/usr/bin/python3
""" FizzBuzz with reference to sort code
"""
import sys


def fizzbuzz(n):
    """
    FizzBuzz fn print num from 1 to n separated by a space.

    - For multiple of three_prints "Fizz" instead of the num and for
      multiples of five_print "Buzz".
    - For numbers which are multiples of both three and five print "FizzBuzz".
    """
    if n < 1:
        return

    tmp_result = []
    for a in range(1, n + 1):
        if (a % 3) == 0 and (a % 5) == 0:
            tmp_result.append("FizzBuzz")
        elif (a % 3) == 0:
            tmp_result.append("Fizz")
        elif (a % 5) == 0:
            tmp_result.append("Buzz")
        else:
            tmp_result.append(str(a))
    print(" ".join(tmp_result))


if __name__ == '__main__':
    if len(sys.argv) <= 1:
        print("Missing number")
        print("Usage: ./0-fizzbuzz.py <number>")
        print("Example: ./0-fizzbuzz.py 89")
        sys.exit(1)

    number = int(sys.argv[1])
    fizzbuzz(number)
