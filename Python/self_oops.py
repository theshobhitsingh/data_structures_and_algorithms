class Employee:
    company = "Apple"
    def getsalary(self):
        print(f"The salary is {self.salary} for an Employee in {self.company}")

Shobhit = Employee()
Shobhit.salary = 10000
Shobhit.getsalary() # same as ---> Employee.getsalary(Shobhit)
print(Shobhit.getsalary)