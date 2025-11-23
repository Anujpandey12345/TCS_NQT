# import pandas as pd
# csv_1 = pd.read_csv("/home/anuj/Documents/Coding_Question's/PYTHON_Question/test.csv")
# print(csv_1)


# p = open("practice11.py")
# print(p.read())


# with open("python.txt",'r') as f:
#     print(type(f))
#     f.seek(10)
#     data = f.read(5)
#     print(data)


# with open("python.txt", "w") as f:
#     f.write("Hello Duniya ! this is Anuj Kumar :: ")
#     f.truncate(14)
# with open("python.txt", "r") as f:
#     print(f.read())




# a = int(input("Enter the Number :: "))
# try:
#     print(10/a)
# except Exception as err:
#     print(f"It's an error as {err}")
# else:
#     print("Good Divid Successfull -:")
# finally:
#     print("I'm Free , Always Run")

# age = int(input("Enter Your Age :: "))
# try:
#     if age < 10 or age > 18:
#         raise ValueError("Sorry You are not Fit for this")
# except Exception as err:
#     print(f"There is an Error {err}")
# else:
#     print("Noice this is run ")
# finally:
#     print("I'm Always Run")


# import pandas as pd
# list = [12, 2,43,45,56]
# s = pd.Series(list, index=["a", "b", "c", "d", "e"])
# print(s)
# print(s["b"])


# import pandas as pd
# std_data = [
#     (1, "Anuj", "Male", 21),
#     (2, "snuj", "Male", 211),
#     (3, "Lnuj", "Male", 21),
#     (4, "Pnuj", "Male", 2112),
#     (5, "Unuj", "Female", 121),
#     (6, "Tnuj", "Fale", 21)
# ]
# dp = pd.DataFrame(std_data, columns=['std_id', 'Name', 'Sex', 'Age'])
# print(dp)
# print("\n")
# print(dp.columns)
# print("\n")
# print(dp.dtypes)
# print("\n")
# print(dp.shape)
# print("\n")
# print(dp.size)
# print("\n")
# print(dp.head(2))
# print("\n")
# print(dp.tail(2))



# import pandas as pd
# std_data = [
#     (1, "Anuj", "Male", 21),
#     (2, "snuj", "Male", 211),
#     (3, "Lnuj", "Male", 21),
#     (4, "Pnuj", "Male", 2112),
#     (5, "Unuj", "Female", 121),
#     (6, "Tnuj", "Fale", 21)
# ]
# d = pd.DataFrame(std_data)
# d.to_csv("Student_data.txt")

# import pandas as pd
# csv_1 = pd.read_csv("Student_data.txt")
# print(csv_1)

# import numpy as np
# array1 = np.arange(1, 10).reshape((3, 3))
# print(array1)


# file = open("Student_data.txt", "r")
# print(file.read())
# print("\n")
# print(file.readline)
# print(file.readlines)
# file.close()   


# with open("python.txt", "r") as f:
#     print(f.read())
# with open("New_Student_data.txt", "r") as f:
#     f.seek(16)
#     data = f.read(10)
#     print(data)
#     data1 = f.tell()
#     print(data1)


# with open("New_Student_data.txt", "w") as f:
#     f.write("Hello Duniya !! This is Anuj Bhai")
#     f.truncate(15)


# with open("New_Student_data.text", "r") as f:
#     print(f.read())


# def solve(age):
#     if age <= 0:
#         return "You are not born"
#     elif 1 <= age <= 10:
#         return "You are Child"
#     elif 11 <= age <= 18:
#         return "You are teenager"
#     elif 19 <= age <= 45:
#         return "You are adult"
#     else:
#         return "You are Old"
# try:
#     age = int(input("Enter Your Age :: "))
# except Exception as err:
#     print(f"Please enter a valid integer for age and error is {err}")
# else:
#     print(solve(age))


# def solve(x):
#     x = x + 5
#     print("Inside", x)

# a = 10
# solve(a)
# print("Outside ", a)


# def solve(list):
#     list.append(10)
#     print("Inside Function", list)
# list = [12, 23, 34, 45, 56]
# solve(list)
# print("Outside the Function ", list)






# def fib(n):
#     #Base Condition
#     if n == 0 or n == 1:
#         return n
#     # Recursive Call
#     return fib(n-2)+fib(n-1)
# n = int(input("Enter the Number :: "))
# for i in range(n):
#     print(fib(i), end=" ")


# print("\n")

# dict = {1:21, 2:32, 3:12}
# for key in dict:
#     print(f"{key} : {dict[key]}")
    

# import math
# num = int(input("Enter the Number :- "))
# sqrt_num = math.sqrt(num)
# print("\n", sqrt_num)


import pandas as pd
csv_1 = pd.read_csv("test.csv")
print(csv_1)