n = int(input("Enter the number -: "))
even = 0
odd = 0
for i in range(1, n+1):
    if i%2 == 0:
        even += i
    else:
        odd += i


print(f"Your Even and Odd Number's are - : {even}, {odd}")