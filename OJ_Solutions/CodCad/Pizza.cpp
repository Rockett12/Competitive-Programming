#include <cstdio>
#define MAXN 112345
using namespace std;
int v[MAXN];
int main()
{
    int n, m ,soma = 0, isoma = 0, ans = 0, ians = 0, sum=0;
    scanf("%d", &n);
    for(int i = 0; i<n; ++i)
    {
        scanf("%d", v+i);
        sum+=v[i];
    }

    for(int i = 0; i<n; ++i)
    {
        soma+=v[i];
        isoma-=v[i];

        if(soma>ans)
            ans = soma;
        else if(soma<0)
            soma = 0;
        if(isoma>ians)
            ians = isoma;
        else if(isoma<0)
            isoma = 0;
    }
    ians+=sum;
    printf("%d\n",ans>ians?ans:ians);
}
