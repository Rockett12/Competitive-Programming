n = input().split()
a = int(n[0])
b = int(n[1])
fun = {}
while a:
    a-=1
    m = input().split()
    fun[m[0]] = int(m[1])

while b:
    resp = 0
    while True:
        line = input()
        if(line == '.'):
            b-=1
            break
        n = line.split()
        for i in n:
            if(fun.get(i)!=None):
                resp+=fun[i]

    print(resp)
        
