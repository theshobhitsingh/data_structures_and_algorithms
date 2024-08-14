class Employee:
    company = 'KIA'
    salary = 100000
    location = 'Delhi'

    @classmethod
    def changeSalary (cls,sal):
        cls.salary = sal

e = Employee()
print(e.salary)
e.changeSalary(122134)
print(e.salary)
print(Employee.salary)