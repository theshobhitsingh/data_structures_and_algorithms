# Using filter will return the values satisfying the function definition
def greater(num):
    if num > 5:
        return True
    else:
        return False
l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(list(filter(greater, l)))

# Divisible by 5
lst = [5, 10, 15, 20, 21, 222, 1000]
def div(n):
    if n % 5 == 0:
        return True
    else:
        return False
print(list(filter(div, lst)))
div = filter(lambda n:n%5 ==0 ,lst)
print(list(div))
