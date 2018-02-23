import sys
murd = {}
kild = {}
for line in sys.stdin:
    line = line.split()
    m = line[0]
    k = line[1]
    
    if murd.get(m)!=None:
        murd[m]+=1
    else:
        murd[m]=1
    kild[k]=1

l = sorted(murd)

print('HALL OF MURDERERS')
for i in l:
    if kild.get(i)!=None:
        continue
    else:
        print(i, murd[i])
    
