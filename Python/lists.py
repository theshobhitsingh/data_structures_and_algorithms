#Create a list using []
a=[1,2,99,108]
#Print the list using print()
print(a)
#Accessing the items of the list using a[0],a[1],a[2]...
print(a[0])
print(a[-1])
#Assigning a new value to a particular list item
a[1]=1000
print(a)
#We can create a list of items with different types
b=[1,100.00,"Shobhit",True]
print(b)
#List Slicing
Friends=["Ram","Shyam","Geeta" ,"Siya",100]
print(Friends[0:4])
print(Friends[-5:])
c =int(input("Enter the number:"))
if c in a:
    print("Yes! The number is found")
else:
    print("Not Found!")