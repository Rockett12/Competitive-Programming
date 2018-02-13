import sys
t = int(input())
for i in range(t):
    a = input()
    a = a.split()
    n = int(a[0])
    m = int(a[1])
    lin = []
    
    for j in range(n):
        a = input()
        a = a.split()
        lin.append((-int(a[1]), int(a[2]), float(a[3]), a[0]))                
    lin.sort()
    print ('CENARIO {%s}' %(i+1))
    for j in range(m):
        print("%s - %s" %(j+1, lin[j][3]))
                
    
