import random
num = random.randint(1, 10)
tries = 0
while True:
    guess = int(input("Enter the Number ::: ")) 
    if num == guess:
        tries += 1
        print(f"Your are guess currect {num} in {tries}")
    elif num < guess:
        tries += 1
        print("Go little lower")
    elif num > guess:
        tries += 1
        print("Go little higher")
    else:
        tries += 1
        print("You guess wrong number")