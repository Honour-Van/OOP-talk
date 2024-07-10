#include <iostream>
#include <string>

class Sensor
{
public:
  Sensor(const std::string &id, const std::string &loc) : sensor_id(id), location(loc) {}

  void read_value()
  {
    std::cout << "Reading sensor value..." << std::endl;
  }

  void read_value(const std::string &unit)
  {
    std::cout << "Reading sensor value in " << unit << std::endl;
  }

private:
  std::string sensor_id;
  std::string location;
};

int main()
{
  Sensor temp_sensor("T1", "Living Room");
  temp_sensor.read_value();
  temp_sensor.read_value("Celsius");

  return 0;
}
