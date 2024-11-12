package main

import "fmt"

// 定义接口
type Sensor interface {
	ReadValue() float64
	GetStatus() string
}

type TemperatureSensor struct {
	temperature float64
}

// 使用指针类型接收器
// func (t *TemperatureSensor) ReadValue() float64 {
// 	return t.temperature
// }

// func (t *TemperatureSensor) GetStatus() string {
// 	return "Temperature Sensor OK"
// }

func (t TemperatureSensor) ReadValue() float64 {
	return t.temperature
}

func (t TemperatureSensor) GetStatus() string {
	return "Temperature Sensor OK"
}

func (t *TemperatureSensor) Update(newTemp float64) {
	t.temperature = newTemp
}

func PrintSensorStatus(s Sensor) {
	fmt.Printf("Value: %.2f, Status: %s\n", s.ReadValue(), s.GetStatus())
}

func main() {
	var tempSensor Sensor
	// 使用指针类型接收器
	// tempSensor = &TemperatureSensor{
	// 	temperature: 25,
	// }
	// PrintSensorStatus(tempSensor)
	// // 使用类型断言
	// if ts, ok := tempSensor.(*TemperatureSensor); ok {
	// 	ts.Update(26)
	// }
	// PrintSensorStatus(tempSensor)

	// 使用值类型接收器
	tempSensor = TemperatureSensor{
		temperature: 25,
	}
	PrintSensorStatus(tempSensor)
	// 使用类型断言
	if ts, ok := tempSensor.(TemperatureSensor); ok {
		ts.Update(26)
	}
	PrintSensorStatus(tempSensor)
}
