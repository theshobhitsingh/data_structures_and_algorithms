# Sum of Natural Numbers upto n
# sum(n) = n + sum(n-1)
def natural(n):
    if n==0:
     return 0 
    if n==1:
       return 1
    else:
       return n +natural(n-1)
    print()
n=int(input("Enter the number: "))
nat=natural(n)
print(f"The sum of {n} natural numbers is {nat}")