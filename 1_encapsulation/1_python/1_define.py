class Sensor:
    def __init__(self, sensor_id, location):
        self.sensor_id = sensor_id
        self.location = location

# 创建对象
temp_sensor = Sensor(sensor_id="T1", location="Living Room")
print(f"Sensor ID: {temp_sensor.sensor_id}, Location: {temp_sensor.location}")
