while True:
    line = int(input())
    if line == 0:
        break
    m = {}
    for i in range (line):
         n = input().split()
         m[n[0]] = n[1]

    resp = 0
    line = int(input())
    for i in range(line):
        n = input().split()
        a = n[1]
        b = m[n[0]]
        j = 0
        for i in range(len(a)):
            if a[i]!=b[i]:
                j+=1
        if(j>1):
            resp+=1
    print(resp)
