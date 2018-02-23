import sys
for line in sys.stdin:
    line = int(line)

    a = 1

    for i in range (10000):
        a%=line
        if a  == 0:
            break
        a = a*10+1

    print(i+1)
