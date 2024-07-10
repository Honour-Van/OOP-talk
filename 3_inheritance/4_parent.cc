#include <iostream>
#include <string>

class Sensor
{
public:
  Sensor(const std::string &id, const std::string &loc) : sensor_id(id), location(loc) {}
  virtual ~Sensor() = default;

  virtual std::string get_status()
  {
    return "Sensor status OK";
  }

protected:
  std::string sensor_id;
  std::string location;
};

class TemperatureSensor : public Sensor
{
public:
  TemperatureSensor(const std::string &id, const std::string &loc) : Sensor(id, loc) {}

  std::string get_status() override
  {
    return Sensor::get_status() + " (Temperature Sensor)";
  }
};

int main()
{
  TemperatureSensor temp_sensor("T1", "Living Room");
  std::cout << temp_sensor.get_status() << std::endl;
  return 0;
}
