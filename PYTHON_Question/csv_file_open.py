# import pandas as pd

# # values must be sequences of equal length to form rows
# dis = {"name": ["Anuj"], "Age": [12], "Sex": ["Male"]}

# d = pd.DataFrame(dis)

# # Write CSV without the default index column
# d.to_csv("test1.csv", index=False)




# d = pd.read_csv("test1.csv")
# print(d)


# def fib(num):
#     if num <= 1:
#         return 1
#     return fib(num-2)+fib(num-1)
    
# try:
#     num = int(input("Enter the Number :: "))
#     if num < 0:
#         raise ValueError("Please Enter the Natural Number")
# except Exception as err:
#     print(f"We got an error {err}")
# for i in range(num):
#     print(fib(i), end=" ")

# print("\n")



# import pandas as pd
# list = [
#     (1, "Name", 71, "Male"),
#     (2, "same", 71, "Fale"),
#     (3, "fame", 61, "Sale"),
#     (4, "game", 41, "Male"),
#     (5, "game", 21, "Male"),
#     (6, "hame", 11, "Male"),
# ]
# d = pd.DataFrame(list)
# d.to_csv("test2.csv")

# d = pd.read_csv("test2.csv")
# print(d)

def solve(dic):
    for i in dic:
        print(i, dic[i])

dic = {1:"Anuj", 2:"Arbaz", 3:"Pukar", 4:"Ankit"}
solve(dic)