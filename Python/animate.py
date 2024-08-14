import turtle

tur = turtle.Turtle()
tur.speed(0) 
def draw_colorful_star(size):
    colors = ["red", "green", "blue", "orange", "purple"]
    for _ in range(5):
        tur.color(colors[_ % 5])
        tur.forward(size)
        tur.right(144)
        tur.speed(1)

def change_size():
    tur.clear()
    try:
        size = int(input("Enter star size (e.g., 50): "))
        draw_colorful_star(size)
    except ValueError:
        print("Invalid input. Please enter a number.")

tur.penup()
tur.goto(0, -50)
tur.pendown()

draw_colorful_star(100)

while True:
    change_size()

turtle.done()
