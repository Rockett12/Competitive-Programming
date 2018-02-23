m = {}
n = input()
n = input().split()
for i in n:
    a = int(i)
    if(m.get(a)!=None):
        m[a]+=1
    else:
        m[a]=1
a =0
b = 0
for i in m:
    if m[i] > b:
        b = m[i]
        a = i
    elif m[i] == b:
        if i>a:
            a = i
    
print(a)
