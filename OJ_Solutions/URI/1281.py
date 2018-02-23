t = int(input())
for i in range(t):
    m = int(input())
    lis = {}
    for j in range(m):
        a = input().split()
        lis[a[0]] = float(a[1])
    resp = 0.0
    m = int(input())
    for j in range(m):
        a = input().split()
        resp += int(a[1])*lis[a[0]]

    print('R$ %.2f' %resp)
