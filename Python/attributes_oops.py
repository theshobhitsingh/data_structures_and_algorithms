class Employee:
    company = "Google"  # ---> Class Attribute

Shobhit = Employee()
Singh = Employee()
print(Shobhit.company)
print(Singh.company)

Employee.company = "Microsoft"
print(Shobhit.company)
print(Singh.company)

# Instance Attributes
Shobhit.salary = 1000000000000
Singh.salary = 10000000000000
print(Shobhit.salary)
print(Singh.salary)

