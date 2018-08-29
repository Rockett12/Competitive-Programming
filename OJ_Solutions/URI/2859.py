b = input()
e = input()
s = 0
x = 0
for i in b:
    s +=ord(i)-ord('0')
s = s%9
for i in e:
    x +=ord(i)-ord('0')
x = x%3
if s == 0:
    print(9)
elif s == 1:
    print(1)
elif s == 2 or s == 5:
    if int(e[-1])%2 == 0:
        if x == 0:
            print(1)
        elif x == 2 and s == 2 or x == 1 and s == 5:
            print(4)
        else:
            print(7)
    else:
        if x == 0:
            print(8)
        elif x == 2 and s == 2 or x == 1 and s == 5:
            print(5)
        else:
            print(2)
elif s == 3 or s == 6:
    if(e == '1'):
        print(s)
    else:
        print(9)

elif s == 4 or s == 7:
    if(x == 0):
        print(1)
    elif x == 1 and s == 4 or x == 2 and s == 7:
        print(4)
    else:
        print(7)

else:
    if int(e[-1])%2 == 0:
        print(1)
    else:
        print(8)

