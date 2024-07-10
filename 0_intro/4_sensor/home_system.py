from temp_sensor import TemperatureSensor
from humidity_sensor import HumiditySensor
from light_sensor import LightSensor


class HomeSensorSystem:
    def __init__(self):
        self.sensors = []

    def add_sensor(self, sensor):
        self.sensors.append(sensor)

    def read_all_sensors(self):
        values = {}
        for sensor in self.sensors:
            values[sensor.sensor_id] = sensor.read_value()
        return values

    def get_all_statuses(self):
        statuses = {}
        for sensor in self.sensors:
            statuses[sensor.sensor_id] = sensor.get_status()
        return statuses


temp_sensor = TemperatureSensor(sensor_id="T1", location="Living Room")
humidity_sensor = HumiditySensor(sensor_id="H1", location="Kitchen")
light_sensor = LightSensor(sensor_id="L1", location="Bedroom")

home_system = HomeSensorSystem()
home_system.add_sensor(temp_sensor)
home_system.add_sensor(humidity_sensor)
home_system.add_sensor(light_sensor)

sensor_statuses = home_system.get_all_statuses()
print("Sensor Statuses:", sensor_statuses)
