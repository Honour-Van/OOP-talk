class Sensor:
    def __init__(self, id, location):
        self.id = id
        self.location = location
        self.observers = []

    def register_observer(self, observer):
        self.observers.append(observer)

    def notify_observers(self):
        for observer in self.observers:
            observer.update(self)

    def set_value(self, value):
        self.value = value
        self.notify_observers()


class SensorObserver:
    def update(self, sensor):
        print(
            f"Sensor {sensor.id} at {sensor.location} updated with value {sensor.value}"
        )


# 使用示例
sensor = Sensor("T1", "Living Room")
observer = SensorObserver()
sensor.register_observer(observer)
sensor.set_value(25)
