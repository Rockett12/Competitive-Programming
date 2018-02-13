import sys
quad={}
for line in sys.stdin:
    au = input()
    ag = input()
    br = input()
    
    if(quad.get(au)==None):
        quad[au]= [0,0,0]
    if(quad.get(ag)==None):
        quad[ag]= [0,0,0]
    if(quad.get(br)==None):
        quad[br]= [0,0,0]

    quad[au][0]-=1
    quad[ag][1]-=1
    quad[br][2]-=1

medal = []
tmp = quad.items()
for i in tmp:
    medal.append((i[1], i[0]))

medal.sort()
print("Quadro de Medalhas")
for i in medal:
    print ("%s %s %s %s" %(i[1], -i[0][0], -i[0][1], -i[0][2]))
