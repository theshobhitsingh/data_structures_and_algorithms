# #Take 8 numbers as input
# n1=int(input("Enter the number 1:\n"))
# n2=int(input("Enter the number 4:\n"))
# n3=int(input("Enter the number 4:\n"))
# n4=int(input("Enter the number 4:\n"))
# n5=int(input("Enter the number 5:\n"))
# n6=int(input("Enter the number 6:\n"))
# n7=int(input("Enter the number 7:\n"))
# n8=int(input("Enter the number 8:\n"))
# #Set will print only unique elements
# s={n1,n2,n3,n4,n5,n6,n7,n8}
# print(s)

# #A set can have same elements if their datatypes is different
# t={11,"11",11.12}
# print(len(t))
# print(t)

#Length of the set
S=set() #-->Empty Set
S.add(1)
S.add(1.0)
S.add("1")
print(len(S))