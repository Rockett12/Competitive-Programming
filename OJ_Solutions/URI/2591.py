n = int(input())
for i in range(n):
    m = input().split('m')
    a = 0
    b = 0
    for j in m[0]:
        if j == 'a':
            a+=1
    for j in m[1]:
        if j == 'a':
            b+=1
    k = 'k' + 'a'*(b*a)
    print(k)
