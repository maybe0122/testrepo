class Npc:
    def __init__(self, name, x, y):
        self.name = name
        self.x = x
        self.y = y

import pickle

with open('npc.pickle', 'rb') as f:
    npc_list = pickle.load(f)

for npc in npc_list:
    print(npc.name, npc.x, npc.y)

