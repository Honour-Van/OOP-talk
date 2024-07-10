from sensor import Sensor

class HumiditySensor(Sensor):
    def read_value(self):
        # 假设获取湿度值的代码
        return 60.0

    def get_status(self):
        return "Humidity Sensor OK"
