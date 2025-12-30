import pandas as pd
# data = {
#     'Name' : ['Anuj', 'Arbaz', 'Rahul'],
#     'Marks1' : [90, 80, 17],
#     'Marks2' : [90, 70, 50],
#     'Marks3' : [99, 99, 99]
# }
# df = pd.DataFrame(data)

# df.to_csv("students.csv", index=False)
# print("csv file created successfully")

# data = pd.read_csv("students.csv")
# print("Avarage marks of the students")
# for i in range(len(data)):
#     name = data['Name'][i]
#     marks = pd.Series([
#         data['Marks1'][i],
#         data['Marks2'][i],
#         data['Marks3'][i]
#     ])
#     avg = marks.mean()

#     print(name, ":", avg)


# import matplotlib.pyplot as plt

# # Data
# food = ["Meat", "Banana", "Avocado", "Sweet Potato", "Spinach", "Watermelon", "Beans"]
# calories = [225, 130, 140, 120, 20, 20, 50]
# potassium = [40, 50, 20, 30, 40, 32, 26]
# fat = [8, 5, 3, 6, 1, 1.5, 2]

# # Plot Calories
# plt.figure()
# plt.bar(food, calories)
# plt.xlabel("Food Category")
# plt.ylabel("Calories")
# plt.title("Calories in Different Food Items")
# plt.show()
# # Plot Potassium
# plt.figure()
# plt.bar(food, potassium)
# plt.xlabel("Food Category")
# plt.ylabel("Potassium")
# plt.title("Potassium in Different Food Items")
# plt.show()
# # Plot Fat
# plt.figure()
# plt.bar(food, fat)
# plt.xlabel("Food Category")
# plt.ylabel("Fat")
# plt.title("Fat Content in Different Food Items")
# plt.show()


# # Data
# Language = ["Python", "Java", "C++", "JavaScript", "Ruby"]
# Popolarity = [30, 25, 20, 15, 10]
# # Plot Popularity

# plt.figure()
# plt.bar(Language, Popolarity)
# plt.xlabel("Language")
# plt.ylabel("Popularity")
# plt.title("Popularity is this")
# plt.show()







# Food = ["Meat", "Banana", "Avacados", "SweetPotatos", "Spinch"]
# Calories = [250, 130, 140, 120, 20]
# Potassium = [40, 55, 20, 30, 40]
# Fat = [8, 5, 3, 6, 1]

# # Plot Calories
# plt.figure()
# plt.bar(Food, Calories)
# plt.xlabel("Food Category")
# plt.ylabel("Calories")
# plt.title("Calories is Diffrent food Items")
# plt.show()


# # Plot Potassium
# plt.figure()
# plt.bar(Food, Potassium)
# plt.xlabel("Food Category")
# plt.ylabel("Potassium")
# plt.title("Potassium is Diffrent food items")
# plt.show()


# # Plot Fat

# plt.figure()
# plt.bar(Food, Fat)
# plt.xlabel("Food Category")
# plt.ylabel("Fat")
# plt.title("Fat is Different food items")
# plt.show()






# num1 = int(input("Enter the Number1 :: "))
# num2 = int(input("Enter the Number2 :: "))

# try:
#     result = num1/num2
#     print(result)
# except Exception as err:
#     print(f"One error occured {err}")
# else:
#     print(f"Division is done")





# age = int(input("Enter the age :: "))
# try:
#     if age < 10 or age > 100:
#         raise ValueError("Sorry you Can't do this")
#     else:
#         print("Welcome to voting club ")

# except Exception as err:
#     print(f"An error Occured {err}")
# print("Club open Soon")






# import pandas as pd
# import numpy as np
# lables = ["a", "b", "c", "d"]
# list = [10, 20, 30, 40]
# dict = {"a":10, "b":20, "c":30, "d":40}
# my_array = np.array([10, 20, 30, 40])


# data = pd.Series(list, index=lables)
# print(data)
# print(data['a'])


# dis = {"s":12, "w":12, "u":90}
# data = pd.DataFrame(dis)
# print(data)

# list = [[12, 13, 14], [15, 16, 17], [18, 19, 20]]
# d = pd.DataFrame(list)
# print(d)

# d.to_csv("Test11.csv")


# data = pd.read_csv("students.csv")
# threshold = 70
# result = data[data['Marks1']  > threshold]
# print(result)



# with open("test.txt", "w") as fl:
#     content = fl.write("Hello Python")
#     print(content)

# file = open("test.txt", "r")
# content = file.read()
# file.close()
# reverse_content = content[::-1]

# result = ",".join(reverse_content)


# print(result)


# with open("text22.txt", "w") as f:
#     f.write("Hello duniya ! how are you")
#     f.truncate(19)


# with open("text22.txt", "r") as f:
#     content = f.read()
#     print(content)

# def fac(num):
#     if num == 0 or num == 1:
#         return 1
#     return num * fac(num-1)


# num = int(input("Enter the Number :: "))
# ans = fac(num)
# print(ans)





# def fib(num):
#     if num == 0:
#         return 0
#     if num == 1:
#         return 1
#     return fib(num-1)+fib(num-2)
    
# num = 10
# ans = fib(num)
# print(ans)


# def chnage(num):
#     num = num + 5
#     print("inside ", num)
# num = 10
# chnage(num)

# print("Outside the ", num)


# def chnage1(num1):
#     num1.append(80)
#     print("inside", num1)
    
# num1 = [10,20,30]
# chnage1(num1)
# print("Outside", num1)



import matplotlib.pyplot as plt

language = ["Python", "Java", "JavaScript", "C", "C++", "Ruby"]
Popularity = [100, 90, 80, 10, 60, 50]

plt.figure()
plt.fill_between(language, Popularity)
plt.xlabel("Language's")
plt.ylabel("Popularity of Language's")
plt.title("This is Graph for Language's Popularity")
plt.show()




# data = pd.read_csv("students.csv")
# print("Average of the CSV file")
# for i in range(len(data)):
#     name = data["Name"][i]
#     marks = pd.Series([
#         data['Marks1'][i],
#         data["Marks2"][i],
#         data["Marks3"][i]
#     ])
#     avg = marks.mean()
#     print(name, ":", avg)



# data = {
#     "Name":["Anuj","Anuj1","Anuj2","ANuj3"],
#     "Age":[12, 34, 5, 6]
# }
# df = pd.DataFrame(data)
# df.to_csv("Hello.csv")


# data = pd.read_csv("students.csv")
# thresold =40
# result = data[data["Marks1"] > thresold]
# print(result)



# data = pd.read_csv("cities.csv")
# last_column = data.iloc[:, -1].values
# remaing_data = data.iloc[:, :-1].values
# plt.plot(data.iloc[:, 0], data.iloc[:, 1])
# plt.xlabel("City")
# plt.ylabel("Population")
# plt.title("City population graph")
# plt.show()







# age = int(input("Enter the Number :: "))
# try:
#     if age < 10 or age > 18:
#         raise ValueError("Sorry you can't get addmission")
#     else:
#         print("Welcome to the college life")
# except Exception as err:
#     print(f"An error occured {err}")
# else:
#     print("No error found")






import numpy as np

import pandas as pd
# label = ["A", "B", "C", "D", "E"]
# arr = np.array([19, 29 , 17 , 82, 82])
# dict = {"A":78, "B":89, "C":0, "D":88}
# data = pd.Series(arr, index=label)

# data1 = ([data["A"] < data["D"]])
# print(data1)



# list = [
#     ("Anuj", 54, "Kanpur"),
#     ("Arbaz", 99, "Bihar"),
#     ("Raju", 999, "Hackerpurva")
# ]
# data = pd.DataFrame(list, columns=["Name", "Age", "Location"])
# print(data)



# data = pd.read_csv("students.csv")
# print(data.head(1))
# print("\n")
# print(data.tail(1))
# print("\n")

# print(data.dtypes)
# print("\n")

# print(data.columns)
# print("\n")

# print(data.rpow)
# print("\n")

# print(data.shape)
# print("\n")

# print(data.size)
# print("\n")

# print(data.values)
# print("\n")

# print(data.index)
















# data = pd.read_csv("cities.csv")
# last_column = data.iloc[:, -1].values
# remaing_data = data.iloc[:, :-1].values

# plt.plot(data.iloc[:, 0], data.iloc[:, 1])
# plt.xlabel("City")
# plt.ylabel("Population")
# plt.title("City VS Population")
# plt.show()