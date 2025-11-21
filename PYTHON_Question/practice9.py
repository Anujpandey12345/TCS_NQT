# Pp = input("Enter the :: ")
# chr = 0
# dig = 0
# spchr = 0
# for i in Pp:
#     if i.isdigit():
#         dig += 1
#     elif i.isalpha():
#         chr += 1
#     else:
#         spchr += 1
# print(dig, chr, spchr)



# p = int(input("Enter the :: "))
# while p > 0:
#     print(p%10)
#     p = p // 10


#Reverse of number
# p = int(input("Enter the :: "))
# while p > 0:
#     print(p%10, end="")
#     p = p // 10
# print("\n")

a = int(input("Enter the number :: "))
rev = 0
orig = a
while orig > 0:
    rev = rev * 10 + orig%10
    orig = orig // 10
if rev == a:
    print("Yes this is Palindromic number")
else:
    print("Yes this is not Palindromic number")
