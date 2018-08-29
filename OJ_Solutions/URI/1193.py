n = int(input())
for i in range(n):
    m = input().split()
    print('Case %d:' % (i+1))
    if m[1] == 'bin':
        print('%d dec' % (int(m[0], 2)))
        print(hex(int(m[0], 2))[2:]+' hex')
    elif m[1] == 'dec':
        print(hex(int(m[0]))[2:] + ' hex')
        print(bin(int(m[0]))[2:] + ' bin')
    else:
        print('%d' %(int(m[0], 16))+ ' dec')
        print(bin(int(m[0], 16))[2:] + ' bin')
    print()
