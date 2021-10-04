def factorial(n):
    if n<=1:
        return 1
    else:
        return n*factorial(n-1)

for _ in range(int(input())):
    n=int(input())
    print(factorial(n))