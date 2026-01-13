import math
def is_prime(n):
    if n<=1:
        return False
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return True
def is_palindrome(n):
    return str(n)==str(n)[::-1]
n=int(input())
n+=1
while True:
    if is_prime(n) and is_palindrome(n):
        print(n)
        break
    n+=1
