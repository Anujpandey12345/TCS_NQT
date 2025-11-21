Str = input("Enter the string for reverse :: ")
rev_str = ""
for i in range(len(Str)-1, -1, -1):
    rev_str += Str[i]
print(rev_str)