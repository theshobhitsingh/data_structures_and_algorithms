class Employee:  # Parent / Base / Super Class
    company = "TCS"

    def showDetails(self):
        print("This is an employee")
        
 # Single Inheritance

class Programmer(Employee):  # Child / Derived / Sub Class
    language = "Python"
    company = "Wipro" # Attribute overriding
    def getLanguage(self):
        print(f"The language is {self.language}")

    def showDetails(self): # Method Overriding
        print("This is a programmer")


e = Employee()  # Base class object
e.showDetails()

p = Programmer()  # Child class object
print(p.company)
p.getLanguage()
p.showDetails()
