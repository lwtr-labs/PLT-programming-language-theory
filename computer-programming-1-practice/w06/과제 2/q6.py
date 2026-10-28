n = int(input("n: "))

def factorial(n):
    print(f"factorial({n})")
    if n == 1 or n == 0:
        return 1
    else:
        return n * factorial(n-1)
    
print(f"factorial({n}) = {factorial(n)}")