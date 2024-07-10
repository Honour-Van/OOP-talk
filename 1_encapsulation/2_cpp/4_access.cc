#include <iostream>
#include <string>

class Sensor {
private:
    std::string sensor_id;  // 私有成员
protected:
    std::string location;  // 受保护成员
public:
    Sensor(const std::string& id, const std::string& loc) : sensor_id(id), location(loc) {}
    std::string read_value() {
        return "Reading sensor value...";
    }
    std::string get_status() {
        return "Sensor status OK";
    }
    // 访问器方法
    std::string get_sensor_id() {
        return sensor_id;
    }
    // 修改器方法
    void set_sensor_id(const std::string& id) {
        sensor_id = id;
    }
};

int main() {
    Sensor temp_sensor("T1", "Living Room");
    std::cout << temp_sensor.get_sensor_id() << std::endl;
    
    temp_sensor.set_sensor_id("T2");
    std::cout << temp_sensor.get_sensor_id() << std::endl;

    return 0;
}
