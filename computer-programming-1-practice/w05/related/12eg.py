import math
import turtle

t = turtle.Turtle()
t.width(5)
t.color("blue")

t.pendown()
for angle in range(360):
    y = math.sin(math.radians(angle))
    scaledX = angle
    scaledY = y * 100
    t.goto(scaledX, scaledY)
    
t.penup()
turtle.done()