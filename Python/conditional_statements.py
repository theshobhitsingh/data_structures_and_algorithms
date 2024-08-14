#The if-elif-else ladder
#Only one condition will execute
a=1
if(a>5):
    print("THe value of a is greater than 5")
elif(a>10):
    print("THe value of a is greater than 10")
elif(a>20):
    print("THe value of a is greater than 20")
elif(a>50):
    print("THe value of a is greater than 50")
else:
    print("The value of a is not greater than any given value")

#Nested if statements
#Each if condition will execute independently
#Either of if-else will execute
b=12
if(b>10):
    print("The value of b is greater than 10")
if(b>9):
    print("The value of b is greater than 9")
if(b>7):
    print("The value of b is greater than 7")
else:
    print("The value is Not greater than any of the given values")