#include <cstdio>
#include <cmath>

using namespace std;
double fat[11234];
int winner[1011];
int main()
{
    int n, m,a,b, l = 0, p =0;
    fat[0]=1;
    char x;
    double lu;
    for(int i = 1; i<=10000; ++i)
        fat[i] = log2(i)+fat[i-1];

    scanf("%d", &n);
    for(int i = 1; i<=n; ++i)
    {
        scanf("%d^%d", &a,&b);
        lu = b*log2(a);
        scanf("%d!",&a);

        if(lu>fat[a])
            ++l, winner[i]=1;
        else if(lu<fat[a])
            ++p, winner[i]=0;
    }

    if(p==l)
        puts("A competicao terminou empatada!");
    else if(p>l)
        puts("Campeao: Pedro!");
    else
        puts("Campeao: Lucas!");

    for(int i = 1; i<=n; ++i)
    {
        printf("Rodada #%d: ", i);
        if(winner[i]&1)
            printf("Lucas");
        else
            printf("Pedro");
        puts(" foi o vencedor");
    }
}
