n = int(input())
pais = []
for i in range(n):
    a = input()
    a = a.split()
    pais.append((-int(a[1]), -int(a[2]), -int(a[3]), a[0]))

pais.sort()

for i in pais:
    print ("%s %s %s %s" %(i[3], -i[0],-i[1], -i[2]))
