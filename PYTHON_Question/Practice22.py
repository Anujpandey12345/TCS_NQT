# num = int(input("Enter the Number :: "))
# fact = 1
# for i in range(1, num+1):
#     fact = fact*i
# print(fact)



# str = "HEH"
# ori = str
# rev_str = " "
# for i in range(len(str)-1, -1, -1):
#     rev_str += str[i]
# if rev_str.lower() == str.lower():
#     print("Yes This is Palimdrome")
# else:
#     print("No this is not")


# tuple1 = (10, 20, 30, 40, 50, 60, 70, 80)
# first_three = tuple1[: 3]
# last_three = tuple1[-3 :]
# print(f"This are the First Three Number :: {first_three}")
# print(f"This are the last Three Number :: {last_three}")

# new_list = list(tuple1)
# new_list[7] = 100
# new_tuple = tuple(new_list)
# print(f"This is Updated Tuple :: {new_tuple}")




# def freq_count(s):
#     freq = {}
#     for ch in s:
#         if ch in freq:
#             freq[ch] += 1
#         else:
#             freq[ch] = 1
#     return freq

# str = "HELLO"
# result = freq_count(str)
# print(result)






# num = int(input("Enter the Number :: "))
# if num < 0:
#     print("Please enter positive number !")
# else:
#     fact = 1
#     for i in range(1, num+1):
#         fact = fact * i
#     print(f"Factorial is :: {fact}")



# num = int(input("Enter the Number :: "))
# print(f"Table of {num} is - > ")
# for i in range(1, 11):
#     print(f"{num} * {i} = {num*i} ")




# tuple1 = (10, 20, 30, 40, 50, 60, 70, 80)
# first_three = tuple1[:3]
# last_three = tuple1[-3:]
# print(f"First three = {first_three}")
# print(f"last three = {last_three}")
# new_list = list(tuple1)
# new_list[6] = 1000
# new_tuple = tuple(new_list)
# print(new_tuple)




# def fib(num):
#     if num == 0:
#         return 0
#     if num == 1:
#         return 1
#     return fib(num-1)+fib(num-2)



# num = int(input("Enter the Number :: "))
# for i in range(num):
#     print(fib(i), end=" ")





# def fact(num):
#     if num == 0 or num == 1:
#         return 1
#     return num * fact(num-1)




# num = int(input("Enter the Number :: "))
# result = fact(num)
# print(result)





# with open("Hello.csv", "r") as file:
#     content = file.read()

# words = content.split()

# for word in words:
#     if word.isdigit():
#         print(word)







# import pandas as pd

# data = {
#     "Name":["A", "B", "C", "D"],
#     "Age":[21, 23, 43, 45],
#     "Marks":[32, 54, 75, 89],
#     "Marks1":[32, 54, 7215, 89],
#     "Marks2":[32, 54, 7532, 845],
#     "Marks3":[32, 54, 7523, 8965],

#     "sex":["M", "F", "F", "F"]
# }


# df = pd.DataFrame(data)
# content = pd.read_csv("student_detail.csv")

# for i in range(len(content)):
#     Name = content["Name"][i]
#     Total_marks = pd.Series([
#         content["Marks"][i],
#         content["Marks1"][i],
#         content["Marks2"][i],
#         content["Marks3"][i]
#     ])
#     avg = Total_marks.mean()
#     print(f"{Name} have got avg marks - {avg}")







# import matplotlib.pyplot as plt

# Food = ["Meat", "Banana", "Avocados", "SweetPotatos", "Spinach", "Watermelon", "Beans"]
# Calories = [250, 130, 140, 120, 20, 20, 50]
# Potassium = [40, 55, 20, 30, 40, 32, 26]
# Fat = [8, 5, 3, 6, 1, 1.5, 2]


# # First Plo
# plt.figure()
# plt.plot(Food, Calories)
# plt.xlabel("Food")
# plt.ylabel("Calories")
# plt.title("Calories of Food's")
# plt.show()





import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("cities.csv")
last_column = data.iloc[:, -1].values
remaing_data = data.iloc[:, :-1].values
plt.plot(data.iloc[:, 0], data.iloc[:, 1])
plt.xlabel("City")
plt.ylabel("Populations")
plt.title("Data of the CIties Polulation")
plt.show()
