#include <iostream>
#include <string>

class Sensor
{
public:
    Sensor(const std::string &id, const std::string &loc) : sensor_id(id), location(loc) {}
    std::string sensor_id;
    std::string location;
};

int main()
{
    Sensor temp_sensor("T1", "Living Room");
    std::cout << "Sensor ID: " << temp_sensor.sensor_id << ", Location: " << temp_sensor.location << std::endl;
    return 0;
}
