import math

def distance(x1, y1, x2, y2):
    dx = x2 - x1
    dy = y2 - y1
    return math.sqrt(dx * dx + dy * dy)
x1, y1 = 0.0, 0.0
x2, y2 = 3.0, 4.0

dist = distance(x1, y1, x2, y2)
print(f"Distance: {dist}")
