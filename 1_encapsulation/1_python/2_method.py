class Sensor:
    def __init__(self, sensor_id, location):
        self.sensor_id = sensor_id
        self.location = location

    def read_value(self):
        return "Reading sensor value..."

    def get_status(self):
        return "Sensor status OK"

# 创建对象并调用方法
temp_sensor = Sensor(sensor_id="T1", location="Living Room")
print(temp_sensor.read_value())
print(temp_sensor.get_status())
