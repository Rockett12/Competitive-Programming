n = int(input())
for i in range(n):
    a= input().split()
    a.sort(key=len,reverse=True )
    
    for j in range(len(a)):
        if j:
            print(end=" ")
        print(a[j], end="")
    print()
