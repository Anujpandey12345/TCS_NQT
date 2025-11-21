Str = input("Enter the string for reverse :: ")

rev_str = ""
for i in range(len(Str)-1, -1, -1):
    rev_str += Str[i]
if rev_str.lower() == Str.lower():
    print("String is Palindrome")
else:
    print("String is not Palindrome")