# Factorial using Functions
def factorial(num):
    fact = 1
    for i in range(1, num + 1):
        fact *= i
    return fact

num = int(input("Enter the number:\n"))
result = factorial(num)
print("The factorial of", num, "is", result)
# Factorial using Recursions
# n! = n  * (n-1)!
def factorial(num):
    if num==0 or num==1: # Base Condition
     return 1
    else:
       return num * factorial(num-1) # Function calling itself
num = int(input("Enter the number:\n"))
result = factorial(num)
print(result)
