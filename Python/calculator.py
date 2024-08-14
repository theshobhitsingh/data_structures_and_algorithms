class Calculator:
    def __init__(self, num):
        self.number = num

    def square(self):
        print(f"The square of {self.number} is {self.number ** 2}")

    def cube(self):
        print(f"The cube of {self.number} is {self.number ** 3}")

    def squareroot(self):
        print(f"The square root of {self.number} is {self.number ** 0.5}")

    @staticmethod
    def greet():
        print("<---*** Hello! Welcoome to the greatest calculator of the World! ***--->")

# Create a Calculator instance
c = Calculator(5)

# Calculate and print square, cube, and square root

c.greet()
c.square()
c.cube()
c.squareroot()
