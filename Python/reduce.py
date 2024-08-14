from functools import reduce
sum = lambda a,b: a+b
l = [1,2,3,4]
val = reduce(sum,l) 
print(val)

list = [1,2,3,4,5,6,7,8,9,10,100000000]
a = reduce(max,list)
print(a)