class Employee:
    company = "Apple"
    def getsalary(self ,signature):
        print(f"The salary is {self.salary} for an Employee in {self.company}\n{signature}")
    @staticmethod   
    def greet():
            print("Good Morning! Sir/Ma'am")

Shobhit = Employee()
Shobhit.salary = 10000
Shobhit.getsalary("Thank you!") # same as ---> Employee.getsalary(Shobhit)
print(Shobhit.getsalary)
Shobhit.greet() # same as ---> Employee.greet()