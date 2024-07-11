import home_system

# 检查是否存在指定类型的传感器
try:
    home_system.run()
    print("[Congratulations] You have passed!")
except:
    print("[x] you haven't finished yet.")
