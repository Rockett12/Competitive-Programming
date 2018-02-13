n = input().split()
jog = []
mod = int(n[1])
for i in range(int(n[0])):
    a = input().split()
    jog.append((-int(a[1]),a[0]))

jog.sort()
tim = []
for i in range(mod):
    tim.append([])

for i in range(len(jog)):
    tim[i%mod].append(jog[i][1])

for i in range(mod):
    print("Time %s" %(i+1))
    tim[i].sort()
    for j in tim[i]:
        print(j)

    print()
