#include <cstdio>
#define MAXN 1001
#define MAXM 1000001
typedef long long int ll;
int mat[MAXN][MAXN];
ll row[MAXN], col[MAXN], dia[2];
bool has[MAXM];
int main()
{
    int n;
    bool f = 1;
    scanf("%d", &n);
    for(int i = 0 ; i<n; ++i)
    {
        for(int j = 0, x; j<n; ++j)
        {
            scanf("%d", &x);
            if(has[x])
                f = 0;
            mat[i][j] = x;
            row[i]+=x;
            col[j]+=x;
            has[x]=1;
        }
    }

    for(int i = 0; f && i<n; ++i)
        dia[0]+=mat[i][i], dia[1]+=mat[i][n-i-1];

    ll veri = row[0];

    for(int i = 0; f && i<n; ++i)
        if(veri!=row[i] || veri!=col[i])
            f = 0;
    if(f && veri == dia[0] && veri == dia[1])
        printf("%lld\n", veri);
    else
        puts("0");

}

