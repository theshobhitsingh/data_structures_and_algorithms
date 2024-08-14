class Employee:
    company = "Apple"

# Constructor

    def __init__(self , name , salary , unit): # __init__ runs automatically
         self.name = name
         self.salary = salary
         self.unit = unit
         print("Employee is created")

    def getdetails(self):
             print(f"The salary for this employee working in {self.company} is {self.salary}") 

    def getsalary(self ,signature):
        print(f"The salary is {self.salary} for an Employee in {self.company}\n{signature}")

    @staticmethod   
    def greet():
            print("Good Morning! Sir/Ma'am")

Shobhit = Employee("Shobhit" , 100000 , "Mac")
Shobhit.getdetails()
#Shobhit.Employee() # ---> will throw an error