#include <cstdio>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
#define MAXM 112
using namespace std;
int sq[MAXM], n, k;
bool ssq[MAXN], f;
int main()
{
    for(int i = 0, j; (j = i*i)<=10000; ++i)
        sq[i] = j, ssq[j]=1;

    while(scanf("%d", &n)!=EOF)
        if(n<0)
            puts("NO");
        else
        {
            for(f = 1, k = sqrt(n); k>=0 && f; k--)
                if(ssq[n-sq[k]])
                    f = 0;
            if(f)
                puts("NO");
            else
                puts("YES");
        }
}
