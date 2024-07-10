#include <iostream>
#include <string>

template <typename T>
class Sensor
{
public:
  Sensor(const std::string &id, const std::string &loc, T initial_value)
      : sensor_id(id), location(loc), value(initial_value) {}

  void set_value(T new_value)
  {
    value = new_value;
  }

  T get_value() const
  {
    return value;
  }

  void display() const
  {
    std::cout << "Sensor ID: " << sensor_id << ", Location: " << location
              << ", Value: " << value << std::endl;
  }

private:
  std::string sensor_id;
  std::string location;
  T value;
};

int main()
{
  Sensor<int> temp_sensor("T1", "Living Room", 25);
  Sensor<double> humidity_sensor("H1", "Kitchen", 60.5);

  temp_sensor.display();
  humidity_sensor.display();

  return 0;
}
