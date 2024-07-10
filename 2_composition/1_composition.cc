#include <iostream>
#include <string>
#include <vector>

class SensorCore
{
public:
    SensorCore(const std::string &type) : core_type(type) {}
    std::string get_core_type() const { return core_type; }

private:
    std::string core_type;
};

class Sensor
{
public:
    Sensor(const std::string &id, const std::string &loc, const std::string &core_type)
        : sensor_id(id), location(loc), core(core_type) {}

    std::string read_value()
    {
        return "Reading sensor value from core: " + core.get_core_type();
    }
    std::string get_status()
    {
        return "Sensor status OK";
    }

private:
    std::string sensor_id;
    std::string location;
    SensorCore core; // 组合关系，Sensor包含一个SensorCore
};

int main()
{
    Sensor temp_sensor("T1", "Living Room", "TemperatureCore");
    std::cout << temp_sensor.read_value() << std::endl;
    std::cout << temp_sensor.get_status() << std::endl;

    return 0;
}
