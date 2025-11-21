# def solve(n):
#     if n == 0:
#         return 1
#     if n == 1:
#         return 1
    
#     return n*solve(n-1)

# n = int(input("Enter the number ;- "))
# print(solve(n))

n = int(input("Enter the number ;- "))
fact = 1
for i in range(1, n+1):
    fact *= i
print(fact)
