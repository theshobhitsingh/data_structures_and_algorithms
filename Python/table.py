# Printing the table of a number

# Using while loop
n = int(input("Enter a number: "))
k = 1
while k <= 10: 
    result = n * k
    print(str(n) + " * " + str(k) + " = " + str(result))
    k = k + 1

# Using for loop
n = int(input("Enter a number: "))
for k in range(1,11):
    result = n * k
    print(str(n) + " * " + str(k) + " = " + str(result))
    
# printing using f strings
    print(f"{n} * {k} = {result}")

# Table in reverse order
num = int(input("Enter the number:\n"))

for i in range(10, 0, -1):
    print(num, "x", i, "=", num * i)

# Using Functions
def print_table(num):
 for i in range(1, 11):
        result = num * i
        print(f"{num} * {i} = {result}")
num = int(input("Enter a number: "))
print_table(num)