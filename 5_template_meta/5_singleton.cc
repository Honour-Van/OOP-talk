#include <iostream>
#include <string>

class SensorManager {
public:
    static SensorManager& getInstance() {
        static SensorManager instance;
        return instance;
    }

    void add_sensor(const std::string& id, const std::string& location) {
        std::cout << "Adding sensor: " << id << " at " << location << std::endl;
    }

private:
    SensorManager() {}
    SensorManager(const SensorManager&) = delete;
    void operator=(const SensorManager&) = delete;
};

int main() {
    SensorManager& manager = SensorManager::getInstance();
    manager.add_sensor("T1", "Living Room");

    return 0;
}
