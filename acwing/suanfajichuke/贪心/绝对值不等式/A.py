n = int(input())
a = list(map(int, input().split()))

a.sort()

n = len(a)
n = n >> 1

res = 0
for x in a:
    res += abs(x - a[n])

print(res)