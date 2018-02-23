card = ['N', 'L', 'S', 'O']
while True:
    n = int(input())
    if not n:
        break
    d = input()
    a = 0
    for i in d:
        if i=='D':
            a+=1
        else:
            a+=3
    print(card[a%4])
    
