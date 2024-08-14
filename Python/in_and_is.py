# The code snippet is demonstrating the use of the `is` operator and the `in` operator in Python.
# is will check both the conditions and return the printing statements; same as ==
a=None
if(a is None):
    print("Yes!")
# In Python, the else clause is optional in certain control flow statements, such as if and for loops. 
else:
    print("No!")

# in will check the given condition and return boolean
b=(1,2,3,4,5)
print(1 in b)
