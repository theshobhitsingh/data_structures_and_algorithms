class Person:  # Grandparent class
    def __init__(self):
        print("Initializing Person")
        self.country = 'INDIA'
        self.state = 'Uttar Pradesh'

    def breath(self):
        print("I am Breathing!")


class Employee(Person):  # Parent class
    company = 'HERO'

    def __init__(self):
        super().__init__()
        print("Initializing Employee")

    def salary(self):
        print(f"The salary is {self.company}")

    def breath(self):
        print("I am Breathing heavily!")
        super().breath()  # Will print the method of its super class


class Programmer(Employee):  # Child class
    company = "Apple"
    def __init__(self):
        super().__init__()
        print("Initializing Programmer")
    def salary(self):
        print("We want salary!")

    def breath(self):
        super().breath()  # Will print the method of its super class
        print("I am Breathing like a Programmer++")


# Test the classes
p = Person()
p.breath()

e = Employee()
e.salary()
e.breath()

pr = Programmer()
pr.salary()
pr.breath()