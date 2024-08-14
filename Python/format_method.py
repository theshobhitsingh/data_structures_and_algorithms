name = 'Shobhit' # {0}
surname = 'Singh' # {1}
domain = 'Technology' # {2}
# f string
a = f"This is {name}"

# Formatting :->
a = "This is {}.".format(name)
b ="This is {0} {1} and his area of learning is {2}.".format(name,surname,domain)
print(a)
print(b)

# Name,Marks,Phone Number
name = input("Enter your Name: ")
phone_number= input("Enter your Phone Number : ")
marks = input ("Enter your Marks: ")

template = "The name of the student is {} , Phone number : {} and Marks: {}."
output = template.format(name,phone_number,marks)
print(output)
