PI = 3.14159

class Circle:
    def __init__(self, radius):
        self.radius = radius
        
    def calculate_area(self):
        area = PI * (self.radius ** 2)
        
        print("계산된 면적:", area)
        print("이 원의 반지름:", self.radius)
        print("사용된 파이값:", PI)
        
    def cal_diameter(self):
        dia = 2 * PI * self.radius
        print("원의 지름:", dia)
        
circle1 = Circle(5)
circle1.calculate_area()
circle1.cal_diameter()
