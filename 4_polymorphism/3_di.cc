#include <iostream>
#include <string>
#include <vector>
#include <memory>

class ISensor
{
public:
  virtual ~ISensor() = default;
  virtual double read_value() = 0;
  virtual std::string get_status() = 0;
};

class TemperatureSensor : public ISensor
{
public:
  double read_value() override
  {
    return 25.0;
  }

  std::string get_status() override
  {
    return "Temperature Sensor OK";
  }
};

class SensorSystem
{
public:
  void add_sensor(std::shared_ptr<ISensor> sensor)
  {
    sensors.push_back(sensor);
  }

  void read_all_sensors()
  {
    for (const auto &sensor : sensors)
    {
      std::cout << "Value: " << sensor->read_value()
                << ", Status: " << sensor->get_status() << std::endl;
    }
  }

private:
  std::vector<std::shared_ptr<ISensor>> sensors;
};

int main()
{
  auto temp_sensor = std::make_shared<TemperatureSensor>();

  SensorSystem system;
  system.add_sensor(temp_sensor);
  system.read_all_sensors();

  return 0;
}
