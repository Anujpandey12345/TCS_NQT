# with open("hello.txt", "r") as file:
#     content = file.read()

# words = content.split()
# for word in words:
#     if word.isdigit():
#         print(word)






# str = input("Enter the String :: ")
# rev_str = ""

# for i in range(len(str)-1,-1,-1):
#     rev_str += str[i]

# print(rev_str)




def count_freq(s):
    freq = {}
    for ch in s:
        if ch in freq:
            freq[ch] += 1
        else:
            freq[ch] = 1
    return freq

result = count_freq("HHHHHHHHHHHUUUUUUUUUUUUUUU")
print(result)