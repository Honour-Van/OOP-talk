class NetworkModule:
    def connect(self):
        print("Connecting using default protocol...")

class WiFiModule(NetworkModule):
    def connect(self):
        print("Connecting using WiFi...")

class Sensor:
    def __init__(self, module):
        self.module = module

    def perform_connection(self):
        self.module.connect()

wifi_module = WiFiModule()
sensor = Sensor(wifi_module)
sensor.perform_connection()  # 输出: Connecting using WiFi...
