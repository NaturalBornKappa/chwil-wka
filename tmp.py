from random import randint

class kostka(object):
    def __init__(self, num_sides = 6):
        self.num_sides = num_sides
        
    def roll(self):
        return randint (1,self.num_sides)
    
kostka = kostka()

results = []
for roll_num in range(100):
    result = kostka.roll()
    results.append(result)
    result = kostka.roll()
    results.append(result)
    

    
print(results)
results.count(1)


{
    num: results.count(num)
    for num in range(1,7)
} 
