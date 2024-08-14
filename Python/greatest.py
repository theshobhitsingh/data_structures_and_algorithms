a=int(input("Enter the first number:\n"))
b=int(input("Enter the second number:\n"))
c=int(input("Enter the third number:\n"))
d=int(input("Enter the fourth number:\n"))

if(a>b and a>c and a>d):
    print(a, "a is the greatest of all given numbers.")
elif(b>a and b>c and b>d):
    print(b, "b is the greatest of all given numbers.")
elif(c>a and c>b and c>d):
    print(c, "b is the greatest of all given numbers.")
else:
    print(d, "d is the gretaest of all given numbers.")