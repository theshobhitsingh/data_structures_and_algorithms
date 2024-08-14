def sqr(num):
    return num*num

l = [1 , 2 , 4]
# Method 1 :
l2 =[]
for item in l:
    l2.append(sqr(item))
print(l2)

# Method 2 : Using maps ->
print(list(map(sqr,l)))
