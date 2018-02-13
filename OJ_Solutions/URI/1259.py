n = int(input())
p = []
for i in range(n):
    a = int(input())
    if a&1:
        a = -a
    p.append(((a&1), a))

p.sort()
for i in p:
    if i[0]&1:
        print(-i[1])
    else:
        print(i[1])
