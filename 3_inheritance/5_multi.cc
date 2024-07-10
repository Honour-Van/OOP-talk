#include <iostream>
#include <string>

// 从语义上把它想成系统中的支持某种功能的组件集合更合适，存在理解的分歧。所以在如Java等语言中就不支持多继承
// 然而C++是一门足够自由的语言

class INetworkModule
{
public:
  virtual ~INetworkModule() = default;
  virtual void connect() const = 0;
  virtual std::string get_network_protocol() const = 0;
};

class WiFiModule : public INetworkModule
{
public:
  WiFiModule(const std::string &protocol) : network_protocol(protocol) {}

  void connect() const override
  {
    std::cout << "Connecting using " << network_protocol << " protocol..." << std::endl;
  }

  std::string get_network_protocol() const override { return network_protocol; }

private:
  std::string network_protocol;
};

class IDataProcessingModule
{
public:
  virtual ~IDataProcessingModule() = default;
  virtual void process_data(const std::string &data) const = 0;
};

class SimpleDataProcessing : public IDataProcessingModule
{
public:
  void process_data(const std::string &data) const override
  {
    std::cout << "Processing data: " << data << std::endl;
  }
};

class Sensor
{
public:
  Sensor(const std::string &id, const std::string &loc)
      : sensor_id(id), location(loc) {}

  virtual ~Sensor() = default;

  std::string get_sensor_id() const { return sensor_id; }
  std::string get_location() const { return location; }

  virtual double read_value() = 0;      // 纯虚函数
  virtual std::string get_status() = 0; // 纯虚函数

private:
  std::string sensor_id;
  std::string location;
};

class TemperatureSensor : public Sensor, public INetworkModule, public IDataProcessingModule
{
public:
  TemperatureSensor(const std::string &id, const std::string &loc, const std::string &protocol)
      : Sensor(id, loc), network_module(protocol) {}

  double read_value() override
  {
    return 25.0;
  }

  std::string get_status() override
  {
    return "Temperature Sensor OK, Network Protocol: " + get_network_protocol();
  }

  // 实现INetworkModule接口
  void connect() const override
  {
    network_module.connect();
  }

  std::string get_network_protocol() const override
  {
    return network_module.get_network_protocol();
  }

  // 实现IDataProcessingModule接口
  void process_data(const std::string &data) const override
  {
    data_processing_module.process_data(data);
  }

private:
  WiFiModule network_module;
  SimpleDataProcessing data_processing_module;
};

int main()
{
  TemperatureSensor temp_sensor("T1", "Living Room", "WiFi");

  std::cout << "Temperature Sensor ID: " << temp_sensor.get_sensor_id()
            << ", Value: " << temp_sensor.read_value() << std::endl;

  std::cout << temp_sensor.get_status() << std::endl;

  // 调用网络模块的方法
  temp_sensor.connect();

  // 调用数据处理模块的方法
  temp_sensor.process_data("Temperature Data");

  return 0;
}
