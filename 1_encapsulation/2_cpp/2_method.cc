#include <iostream>
#include <string>

class Sensor
{
public:
    Sensor(const std::string &id, const std::string &loc) : sensor_id(id), location(loc) {}
    std::string read_value()
    {
        return "Reading sensor value...";
    }
    std::string get_status()
    {
        return "Sensor status OK";
    }
    std::string sensor_id;
    std::string location;
};

int main()
{
    Sensor temp_sensor("T1", "Living Room");
    std::cout << temp_sensor.read_value() << std::endl;
    std::cout << temp_sensor.get_status() << std::endl;
    return 0;
}
