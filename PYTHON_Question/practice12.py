age = int(input("Enter the Age :: "))
try:
    if age < 10 or age > 18:
        raise ValueError("Sorry you can't get the Club access")
    else:
        print("Welcome to the Club")
except Exception as err:
    print(f"An error occured as {err}")
print("Club open Soon")