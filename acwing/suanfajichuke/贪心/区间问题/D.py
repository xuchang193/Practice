st, ed = map(int, input().split())
n = int(input())

w = []
for i in range(n):
    tmp = list(map(int, input().split()))
    w.append(tmp)

w.sort()

res = 0
success = False
i = 0
while i < n:
    j, r = i, -2000000000
    while j < n and w[j][0] <= st:
        r = max(r, w[j][1])
        j += 1
    
    if r < st: break

    res += 1
    if r >= ed:
        success = True
        break
    st = r
    i = j - 1
    i += 1

if not success: res =  -1
print(res)