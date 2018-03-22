import sys
for line in sys.stdin:
    line = int(line)
    carn = []
    for i in range(line):
        n = input().split()
        carn.append((int(n[1]), n[0]))

    carn.sort()

    for i in range(len(carn)):
        if i:
            print(end=" ")
        print(carn[i][1],end="")

    print()
