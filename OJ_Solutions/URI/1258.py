k=0
import sys
while True:
    line = int(input())
    if line == 0:
        break
    if k:
        print()
    k=1
    p = []
    for i in range(line):
        a = input().split()
        b = input().split()
        if b[1]=='G':
            b[1]='g'
        elif b[1]=='M':
            b[1]='a'
        p.append((b[0], b[1], a))

    p.sort()

    for i in range(line):
        print (p[i][0], end=" ")
        if p[i][1]=='g':
            print('G', end=" ")
        elif p[i][1]=='a':
            print('M', end=" ")
        else:
            print('P', end=" ")
        k = 0
        for j in p[i][2]:
            if k:
                print(end=" ")
            print(j, end="")
            k=1
        print()
    
        
