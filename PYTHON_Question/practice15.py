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

import pandas as pd
csv_1 = pd.read_csv("Student_data.txt")
print(csv_1)