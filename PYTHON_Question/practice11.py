a = int(input("Enter the Number :- "))
try:
    print(10/a)
except Exception as err:
    print(f"Sorry there is an error as {err}")
else:
    print("Good there is no error")
finally:
    print("No metter What")
print("Ok i have done the division")
