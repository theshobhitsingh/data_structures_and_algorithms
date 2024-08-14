# Comprehension
list = [1 , 2 ,3 ,4 ,5 ,6 ,7 ,9 , 100]

b =[]
for item in list:
    if item%2 == 0:
        b.append(item)
print(b)

# Shortcut method
b = [item for item in list if item%2==0]
print(b)

# Set comprehension
set =[ 1,2 ,3 ,4 ,2 ,1 ,1 ,3]
s ={ i  for  i in set }
print(s)
