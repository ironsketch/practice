import random
a = []
count = 0
while count < 100001:
    ran = random.randint(0,1000001)
    if ran not in a:
        a.append(ran)
        count += 1

print a

