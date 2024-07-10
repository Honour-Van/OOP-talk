from sensor import Sensor

class TemperatureSensor(Sensor):
    def read_value(self):
        # 假设获取温度值的代码
        return 25.0

    def get_status(self):
        return "Temperature Sensor OK"
