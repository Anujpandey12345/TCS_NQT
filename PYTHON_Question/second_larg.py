l = [21, 22, 76, 12, 9, 1221, 12]
largest = l[0]
second_largest = l[0]
for i in l:
    if i > largest:
        second_largest = largest
        largest  = i
    elif i > second_largest:
        second_largest = i

print(second_largest, largest)





print(largest)