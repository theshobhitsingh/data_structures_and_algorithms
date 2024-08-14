def good_day(name):
     print("Hello Ji! Have a good day!"+ name)

name=input("Enter your good name please:\n")
good_day(name)

# Function to add two numbers
def my_sum(n1,n2):
     s=n1+n2
     return s
n1=int(input("Enter the first number: "))
n2=int(input("Enter the second number: "))
S=my_sum(n1,n2)
print(S)