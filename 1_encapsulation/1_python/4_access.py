class Sensor:
    def __init__(self, sensor_id, location):
        self.__sensor_id = sensor_id  # 私有成员
        self._location = location  # 受保护成员

    def read_value(self):
        return "Reading sensor value..."

    def get_status(self):
        return "Sensor status OK"

    # 访问器方法
    def get_sensor_id(self):
        return self.__sensor_id

    # 修改器方法
    def set_sensor_id(self, sensor_id):
        self.__sensor_id = sensor_id

# 创建对象并使用访问器和修改器方法
temp_sensor = Sensor(sensor_id="T1", location="Living Room")
print(temp_sensor.get_sensor_id())

temp_sensor.set_sensor_id("T2")
print(temp_sensor.get_sensor_id())
