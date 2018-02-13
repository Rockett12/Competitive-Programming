import sys
j = 0
for line in sys.stdin:
    a = 11
    b = "a"
    for i in range(int(line)):
        n = input()
        n = n.split(" ")
        c = int(n[1])
        if c<a:
            a = c
            b = n[0]
        elif c==a:
            if n[0]>b:
                b=n[0]
    j = j +1
    print ("Instancia %s\n%s\n" %(j, b))
    
