n = int(input())
a = []
for i in range(n): 
    w, s = map(int, input().split())
    a.append([w + s, w])

a.sort()

res, Sum = -2e9, 0
for i in range(n):
    w, s = a[i][1], a[i][0] - a[i][1]
    res = max(res, Sum - s)
    Sum += w

print(res)