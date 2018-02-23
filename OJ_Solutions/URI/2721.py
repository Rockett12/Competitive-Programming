m = {}
m[0] = 'Rudolph'
m[1] = 'Dasher'
m[2] = 'Dancer'
m[3] = 'Prancer'
m[4] = 'Vixen'
m[5] = 'Comet'
m[6] = 'Cupid'
m[7] = 'Donner'
m[8] = 'Blitzen'

n = input().split()
a = 0
for i in n:
    a += int(i)

print(m[a%9])
