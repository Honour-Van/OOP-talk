class Sensor:
    def __init__(self, sensor_id, location):
        self.__sensor_id = sensor_id  # 私有成员
        self._location = location  # 受保护成员

    def read_value(self):
        return "Reading sensor value..."

    def get_status(self):
        return "Sensor status OK"

    # 公有方法
    def get_sensor_id(self):
        return self.__sensor_id

# 创建对象并访问成员
temp_sensor = Sensor(sensor_id="T1", location="Living Room")
print(temp_sensor.read_value())
print(temp_sensor.get_status())
print(temp_sensor.get_sensor_id())
