import math


class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y


def make_point(x, y):
    return Point(x, y)


def distance(p1, p2):
    dx = p2.x - p1.x
    dy = p2.y - p1.y
    return math.sqrt(dx * dx + dy * dy)


p1 = make_point(0.0, 0.0)
p2 = make_point(3.0, 4.0)

dist = distance(p1, p2)
print(f"Distance: {dist}")
