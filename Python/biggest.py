num1=int(input("Enter the first number:\n"))
num2=int(input("Enter the second number:\n"))
num3=int(input("Enter the third number:\n"))
num4=int(input("Enter the fourth number:\n"))

if(num1>num2):
    f1=num1
else:
    f1=num2

    if(num3>num4):
        f2=num3
    else:
        f2=num4

if(f1>f2):
    print(str(f1) + " is the biggest number.")
else :
    print(str(f2) + " is the biggest number.")