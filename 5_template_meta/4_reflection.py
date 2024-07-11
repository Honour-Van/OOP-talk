class Sensor:
    def __init__(self, id, location):
        self.id = id
        self.location = location

    def display(self):
        print(f"Sensor ID: {self.id}, Location: {self.location}")


temp_sensor = Sensor("T1", "Living Room")

# 使用反射获取属性
print(hasattr(temp_sensor, "id"))
print(getattr(temp_sensor, "id"))
setattr(temp_sensor, "id", "T2")
print(getattr(temp_sensor, "id"))
delattr(temp_sensor, "id")
print(hasattr(temp_sensor, "id"))
