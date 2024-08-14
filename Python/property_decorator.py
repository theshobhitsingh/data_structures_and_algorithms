class Employee:
    company = "Indian Oil"
    salary = 100000
    salary_bonus = 100
    
    @property
    def total_salary(self):
        return self.salary + self.salary_bonus
    
    @total_salary.setter
    def total_salary(self, val):
        self.salary_bonus = val - self.salary

e = Employee()
print(e.total_salary)
e.total_salary = 6000
print(e.salary)
print(e.salary_bonus)