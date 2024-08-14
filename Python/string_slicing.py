name="Shobhit"
greeting="Namaste! "
print(greeting)
print(type(name))
#String Concatenation
c=greeting+name
print(c)
print(greeting+name)
#String Slicing
print(name[3])
print(greeting[0])
# name[2]="Z"  -->Does not work
# print(name[2])
print(name[0:5])
print(greeting[1:3])
print(name[:4]) # is same as--> print(name[0:4])
print(name[0:]) # is same as-->print(name[0:7])
print(name[-2])
print(name[-1:-7]) #is same as -->print(name[0:6])
print(name[-7:0])
#String Length
print(len(name))
fame="SuperShobhitSingh"
#Skip Value
d=fame[0::2]
print(d)