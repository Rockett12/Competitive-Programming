n = int(input())

for i in range(n):
    a = input().split()
    if(a[2]=='1'):
        print('%02d:%02d - A porta abriu!' %(int(a[0]), int(a[1])))
    else:
        print('%02d:%02d - A porta fechou!' %(int(a[0]), int(a[1])))
