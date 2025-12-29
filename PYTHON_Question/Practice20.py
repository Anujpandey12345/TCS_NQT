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






import pandas as pd
import numpy as np
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

list = [[12, 13, 14], [15, 16, 17], [18, 19, 20]]
data = np.array(list)
print(data)
data1 = np.zeros(10)
print(data1)
