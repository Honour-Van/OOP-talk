class Animal:
    def speak(self):
        pass


class Dog(Animal):
    def speak(self):
        print("woo")


class Cat(Animal):
    def speak(self):
        print("meow")


a = Dog()
b = Cat()

a.speak()  # 输出：woo
b.speak()  # 输出：meow
