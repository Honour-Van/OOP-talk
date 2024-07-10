class Sensor:
    def __init__(self, sensor_id, location):
        self.sensor_id = sensor_id
        self.location = location

    def read_value(self):
        raise NotImplementedError("Subclasses should implement this method")

    def get_status(self):
        raise NotImplementedError("Subclasses should implement this method")
