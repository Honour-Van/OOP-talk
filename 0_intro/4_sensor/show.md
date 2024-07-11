阅读 home system 的代码，大概了解一下面向对象编程所描述的对象是什么样的。

在 smoke_sensor.py 文件中完善 SmokeSensor 类，显然它是一个传感器。完善功能之后，你会发现我们通过单独增加一个子传感器而没有改变整个传感器系统，就增加了一个传感器！从中体会面向对象编程设计时插件式的观念。

完善过程中可以运行即可验证是否成功
```
python3 0_intro/4_sensor/check.py
```

一个可行的参考代码如下：

smoke_sensor.py
```py
class SmokeSensor(Sensor):
    def read_value(self):
        # 假设获取烟雾浓度值的代码
        return 0.02

    def get_status(self):
        return "Smoke Sensor OK"
```

