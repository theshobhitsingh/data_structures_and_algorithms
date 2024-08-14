#Creating an Empty set
a=set()
print(type(a))

#Adding values to an empty set
a.add(1)
a.add(2)
a.add(1) #It will not add repetitive elements
print(a)

#We can not add list to a set
a.add([1,2,3,4,5])
print(a)

#We can not add dictionary to a set
a.add({1:101})
print(a)

#We can add tuple to a set
a.add((100,102,102))
#print(a)

#We can not add set to a set
a.add({1,2,3,4,5,6})
print(a)

#Prints the length of a set
print(len (a))

#Removes an element from the set;will throw an error if we try to remove an element which is not present in the set
a.remove(1)
print(a)

#Removes an arbitrary element from the set
print(a.pop())
print(a)

#Empties the set
print(a.clear())
print(a)

#Prints the union of the given sets
S={'s','h','o','b','h','i','t'}
D={'s','i','n','g','h'}
S.union()
print(S)

#Prints the intersection of the given sets
S={'s','h','o','b','h','i','t'}
D={'s','i','n','g','h'}
D.intersection()
print(D)
