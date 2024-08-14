# This code prompts the user to enter a number, multiplies that number by the numbers 1 to 10, and
# stores the results in a list called `table`. It then prints the table to the console.
num = int(input("Enter your number: "))

table = [num*i for i in range(1,11)]
print (str(table))

with open ("multiplication_table.txt","a") as f:
    f.write(str(table))
    f.write("\n")
