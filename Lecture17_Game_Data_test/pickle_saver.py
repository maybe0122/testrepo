class Npc:
    def __init__(self, name, x, y):
        self.name = name
        self.x = x
        self.y = y


yuri = Npc('Yuri', 100, 100)
print(yuri.__dict__)
yuri.__dict__['age'] = 30   # 객체 변수를 만드는 또 하나의 방법
print(yuri.name, yuri.x, yuri.y, yuri.age)
yuri.name, yuri.x, yuri.y = 'tom', 4, 5
new_data = {'name': 'jenny', 'x': 5, 'y': 100, 'age': 20}
yuri.__dict__.update(new_data)

print(yuri.name, yuri.x, yuri.y, yuri.age)
