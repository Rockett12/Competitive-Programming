import sys
for line in sys.stdin:
    line = line.split()
    nome = line[0]
    num = int(line[1])
    lista = []
    for i in range(num):
        brin = input()
        ''' adicionar split acima?'''
        h = input().split()
        cost = float(h[0])
        pref = -int(h[1])
        lista.append((pref, cost, brin))

    lista.sort()

    print('Lista de %s' %nome)
    for i in lista:
        print('%s - R$%.2f' %(i[2], i[1]))

    print()
        
