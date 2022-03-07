# w: 무게
# s : 몫
# x: 나머지

w = int(input())

s = w//8
x = w % 8
print("8KG :", s)
s = x//4
x = x % 4
print("4KG :", s)
s = x//2
x = x % 2
print("2KG :", s)
s = x//1
x = x % 1
print("1KG :", s)
