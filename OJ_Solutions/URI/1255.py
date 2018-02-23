n = int(input())
for i in range(n):
    m = {}
    s = input().lower().strip(" ")
    for j in s:
        if j.isalpha():
            if m.get(j)!=None:
                m[j]-=1
            else:
                m[j]= -1
    l = sorted(m);
    a = -min(m.values());
    for i in l:
        if -m[i] == a:
            print(i, end="")
    print()