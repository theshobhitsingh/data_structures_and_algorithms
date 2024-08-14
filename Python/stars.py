# *
# **
# ***
num = int(input("Enter the number:\n"))

for i in range(1, num + 1):
    print("*" * i)

#    *
#   ***
#  *****
num = int(input("Enter the number:\n"))

for i in range(num):
    spaces = " " * (num - i - 1)
    stars = "*" * (2*i + 1)
    print(spaces + stars)


    # * * *
    # *   *
    # * * *
    num = int(input("Enter the number:\n"))

print("*  *  *")
for i in range(num):
    print("*      *")
print("*  *  *")

# * * *
# * *
# *

num = int(input("Enter the number:\n"))

for i in range(num):
    print("*" * (num -i))
