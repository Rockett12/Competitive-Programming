n = int(input())
m = {}
for i in range(n):
    a = int(input())
    if m.get(a)!=None:
        m[a]+=1
    else:
        m[a]=1

l = sorted(m)

for i in l:
    print('%s aparece %s vez(es)' %(i, m[i]))

