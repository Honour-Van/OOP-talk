#include <iostream>
#include <string>

class Sensor
{
private:
    std::string sensor_id; // 私有成员
protected:
    std::string location; // 受保护成员
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
    // 公有方法
    std::string get_sensor_id()
    {
        return sensor_id;
    }
};

int main()
{
    Sensor temp_sensor("T1", "Living Room");
    std::cout << temp_sensor.read_value() << std::endl;
    std::cout << temp_sensor.get_status() << std::endl;
    std::cout << temp_sensor.get_sensor_id() << std::endl;
    std::cout << temp_sensor.sensor_id << std::endl; // error
    return 0;
}
