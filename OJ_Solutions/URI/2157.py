n = int(input())
for i in range(n):
    a,b = map(int,input().split())
    s = ''
    for j in range(a,b+1):
        s+=str(j)
    ss = s[::-1]
    print(s+ss)


