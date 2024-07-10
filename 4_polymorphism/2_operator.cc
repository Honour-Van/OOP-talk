#include <iostream>
#include <string>

class Sensor
{
public:
  Sensor(const std::string &id, const std::string &loc) : sensor_id(id), location(loc) {}

  bool operator==(const Sensor &other) const
  {
    return (sensor_id == other.sensor_id) && (location == other.location);
  }

private:
  std::string sensor_id;
  std::string location;
};

int main()
{
  Sensor sensor1("T1", "Living Room");
  Sensor sensor2("T1", "Living Room");
  Sensor sensor3("T2", "Kitchen");

  if (sensor1 == sensor2)
  {
    std::cout << "sensor1 and sensor2 are equal" << std::endl;
  }
  else
  {
    std::cout << "sensor1 and sensor2 are not equal" << std::endl;
  }

  if (sensor1 == sensor3)
  {
    std::cout << "sensor1 and sensor3 are equal" << std::endl;
  }
  else
  {
    std::cout << "sensor1 and sensor3 are not equal" << std::endl;
  }

  return 0;
}
