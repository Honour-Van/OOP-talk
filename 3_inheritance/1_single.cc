#include <iostream>
#include <string>

// 传感器基类
class Sensor
{
public:
  Sensor(const std::string &id, const std::string &loc) : sensor_id(id), location(loc) {}
  virtual ~Sensor() = default;

  std::string get_sensor_id() const { return sensor_id; }
  std::string get_location() const { return location; }

  virtual double read_value() = 0;      // 纯虚函数
  virtual std::string get_status() = 0; // 纯虚函数

private:
  std::string sensor_id;
  std::string location;
};

// 温度传感器类，继承自传感器基类
class TemperatureSensor : public Sensor
{
public:
  TemperatureSensor(const std::string &id, const std::string &loc) : Sensor(id, loc) {}

  double read_value() override
  {
    return 25.0;
  }

  std::string get_status() override
  {
    return "Temperature Sensor OK";
  }
};

int main()
{
  TemperatureSensor temp_sensor("T1", "Living Room");
  std::cout << "Temperature Sensor ID: " << temp_sensor.get_sensor_id()
            << ", Value: " << temp_sensor.read_value() << std::endl;
  return 0;
}
