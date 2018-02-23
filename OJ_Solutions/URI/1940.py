lin = input().split()
j = int(lin[0])
r = [0]*j
a = input().split()
for i in range(len(a)):
    r[i%j]+= int(a[i])
j = 0
for i in range(len(r)):
    if r[i]>=r[j]:
        j = i

print (j+1)
