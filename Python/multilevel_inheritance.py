class Person:  # Grandparent class
    country = 'INDIA'
    state = 'Uttar Pradesh'

    def breath(self):
        print("I am Breathing!")


class Employee(Person):  # Parent class
    company = 'HERO'

    def salary(self):
        print(f"The salary is {self.salary}")

    def breath(self):
        print("I am Breathing heavily!")


class Programmer(Employee):  # Child class
    company = "Apple"

    def salary(self):
        print("We want salary!")

    def breath(self):
        print("I am Breathing like a Programmer++")


p = Person()
p.breath()
print(p.state)

e = Employee()
e.breath()
print(e.company)

pr = Programmer()
pr.breath()
print(pr.country)