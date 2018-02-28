n = int(input())

for i in range(n):
    nome = input()
    f = float(input())
    lista = map(float, input().split())
    soma = 0.0
    menor = 11
    maior = -1
    for j in lista:
        soma += j
        if j <menor:
            menor = j
        if j>maior:
            maior = j

    soma -= (menor + maior)
    print('%s %.2f' %(nome, soma*f))

