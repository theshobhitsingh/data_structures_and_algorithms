# # To check whether a given number is prime or not

num = int(input("Enter the number:\n"))
prime = True

if num <= 1:
    prime = False
else:
    for i in range(2, num):
        if num % i == 0:
            prime = False
            break

if prime:
    print("The number is prime.")
else:
    print("The number is not prime.")
    
# Even or Odd
num = int(input("Enter a number: "))
if (num%2==0):
    print('Even')
else:
    print('Odd')