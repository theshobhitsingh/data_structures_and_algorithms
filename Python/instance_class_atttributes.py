class Employee:
    company = "Google"  # ---> Class Attribute
    salary = 100

Shobhit = Employee()
Singh = Employee()

# Instance Attributes
Shobhit.salary = 1000000000000
Singh.salary = 10000000000000
print(Shobhit.salary)
print(Singh.salary)

# It will throw an error as address is not present in instance / class
# print(Shobhit.address)



