#dem so nto
# n = int(input())
# while True:
#     l = list(map(int, input().split()))
#     if len(l) != n:
#         continue
#     else:
#         break
# dem = 0
# for i in l:
#     if i <= 1:
#         continue
#     sonto = True
#     for j in range(2, int(i**0.5) + 1):
#         if i % j == 0:
#             sonto = False
#             break
#     if sonto:
#         dem += 1
#
# print(dem)
# Phép tính số học trên số nguyên bản 1
# a,b=map(int , input().split())
# print( a ,"+", b ,"=", a + b)
# print( a ,"-", b ,"=", a - b)
# print( a ,"*", b ,"=", a * b)
# print( a ,"/", b ,"=", int(a / b))
# print( a ,"%", b ,"=", a % b)
# Phép tính số học trên số nguyên bản 2
# a,b=map(int , input().split())
# print( a ,"+", b ,"=", a + b)
# print( a ,"-", b ,"=", a - b)
# print( a ,"*", b ,"=", a * b)
# print( a ,"/", b ,"=", int(a / b))
# print( a ,"%", b ,"=", a % b)
#Hiệu của hai tích số
# a,b,c,d=map(int , input().split())
# x= a*b-c*d
# print("Difference =", x)
#Tổng và tích
# m,n=map(int , input().split())
# d = m%10
# h=n%10
# a=m//1000
# e=n//1000
# S= d+h
# P=a*e
# print(S)
# print(P)
#đếm số chia hết cho 3
# a=int(input())
# print(a//3)
#hàm toán cơ bản
import math
x = float(input())
sin_x = math.sin(x)
gtLog = 3 * x
log4 = math.log(gtLog, 4)
abs = abs(3 * math.exp(x))
result = sin_x + math.sqrt(log4) + abs

# In kết quả
print(f"{result:.6f}")
