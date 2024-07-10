package main

import "fmt"

// 定义接口
type Sensor interface {
    ReadValue() float64
    GetStatus() string
}

type TemperatureSensor struct {
}

func (t TemperatureSensor) ReadValue() float64 {
    return 25.0
}

func (t TemperatureSensor) GetStatus() string {
    return "Temperature Sensor OK"
}

func PrintSensorStatus(s Sensor) {
    fmt.Printf("Value: %.2f, Status: %s\n", s.ReadValue(), s.GetStatus())
}

func main() {
    var tempSensor Sensor
    tempSensor = TemperatureSensor{}
    PrintSensorStatus(tempSensor)
}
