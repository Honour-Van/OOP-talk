#include <iostream>
#include <string>
#include <vector>

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

// 温度传感器类
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

// 湿度传感器类
class HumiditySensor : public Sensor
{
public:
  HumiditySensor(const std::string &id, const std::string &loc) : Sensor(id, loc) {}

  double read_value() override
  {
    return 60.0;
  }

  std::string get_status() override
  {
    return "Humidity Sensor OK";
  }
};

int main()
{
  std::vector<Sensor *> sensors;
  sensors.push_back(new TemperatureSensor("T1", "Living Room"));
  sensors.push_back(new HumiditySensor("H1", "Kitchen"));

  for (const auto &sensor : sensors)
  {
    std::cout << "Sensor ID: " << sensor->get_sensor_id()
              << ", Value: " << sensor->read_value()
              << ", Status: " << sensor->get_status() << std::endl;
  }

  for (const auto &sensor : sensors)
  {
    delete sensor;
  }

  return 0;
}
