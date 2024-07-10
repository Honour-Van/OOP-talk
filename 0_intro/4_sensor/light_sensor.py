from sensor import Sensor


class LightSensor(Sensor):
    def read_value(self):
        # 假设获取光照值的代码
        return 300

    def get_status(self):
        return "Light Sensor OK"
