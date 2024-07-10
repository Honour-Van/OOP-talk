#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Sensor {
public:
    Sensor(const std::string& id, const std::string& loc)
        : sensor_id(id), location(loc) {}

    std::string read_value() {
        return "Reading sensor value...";
    }
    std::string get_status() {
        return "Sensor status OK";
    }

    std::string get_sensor_id() const {
        return sensor_id;
    }

private:
    std::string sensor_id;
    std::string location;
};

class HomeSensorSystem {
public:
    void add_sensor(std::shared_ptr<Sensor> sensor) {
        sensors.push_back(sensor);
    }

    void read_all_sensors() {
        for (const auto& sensor : sensors) {
            std::cout << "Sensor ID: " << sensor->get_sensor_id() << ", Value: " << sensor->read_value() << std::endl;
        }
    }

private:
    std::vector<std::shared_ptr<Sensor>> sensors;  // 聚合关系，HomeSensorSystem包含多个Sensor指针
};

int main() {
    auto temp_sensor = std::make_shared<Sensor>("T1", "Living Room");
    auto humidity_sensor = std::make_shared<Sensor>("H1", "Kitchen");

    HomeSensorSystem home_system;
    home_system.add_sensor(temp_sensor);
    home_system.add_sensor(humidity_sensor);

    home_system.read_all_sensors();

    return 0;
}
