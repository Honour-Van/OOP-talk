class SensorMeta(type):
    def __new__(cls, name, bases, dct):
        print(f"Creating class {name}")
        return super().__new__(cls, name, bases, dct)

class Sensor(metaclass=SensorMeta):
    def __init__(self, id, location):
        self.id = id
        self.location = location

    def display(self):
        print(f"Sensor ID: {self.id}, Location: {self.location}")

temp_sensor = Sensor("T1", "Living Room")
temp_sensor.display()
