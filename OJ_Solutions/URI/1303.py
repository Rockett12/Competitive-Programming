i = 0
while True:
    n = int(input())
    if n == 0:
        break

    if i!=0:
        print()
    nbam = {}
    nbap = {}
    pontos = []
    for j in range(n):
        nbam[j+1]=0
        nbap[j+1]=0
        pontos.append(0)
    r = int((n*(n-1))/2)
    
    for j in range(r):
        a = input().split()
        a[0] = int(a[0])
        a[1] = int(a[1])
        a[2] = int(a[2])
        a[3] = int(a[3])
        
        nbam[a[0]]-=a[1]    
        nbap[a[0]]-=a[3]

        nbam[a[2]]-=a[3]    
        nbap[a[2]]-=a[1]
        
        if(a[1]>a[3]):
            pontos[a[0]-1] -=2
            pontos[a[2]-1]-=1
        else:
            pontos[a[0]-1] -=1
            pontos[a[2]-1] -=2
    i = i +1
    resp = []
    for j in range(n):
        if nbap[j+1]==0:
            nbap[j+1]= -1
        resp.append((pontos[j],-float(nbam[j+1]/float(nbap[j+1])), nbam[j+1], j+1))
    resp.sort()
    
    print("Instancia %s" %i)
    k = 0
    for j in resp:
        if k:
            print(end= " ")
        print (j[3], end="")
        k = 1

    print()
