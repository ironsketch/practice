fizz = "fizz"
buzz = "buzz"

for i in range(0, 101):
    if(i % 3 == 0 and i % 5 == 0):
        print(str(i) + ": " + fizz + " " + buzz)
    elif(i % 3 == 0):
        print(str(i) + ": " + fizz)
    elif(i % 5 == 0):
        print(str(i) + ": " + buzz)
