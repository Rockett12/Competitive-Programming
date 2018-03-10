#include <cstdio>
#include <algorithm>
#include <cmath>
#define MAXN 305
#define MAXD 90010
using namespace std;
int sum[MAXD], ind[4][MAXD];
int main()
{
    int n, m, d, q;
    scanf("%d %d %d", &n,&m, &d);

    for(int i =0 ;i<n; ++i)
        for(int j = 0, a; j<m; ++j)
            scanf("%d", &a), ind[1][a] = i, ind[2][a] = j;

    for(int i = d; i<=n*m; ++i)
        sum[i] = sum[i-d] + (abs(ind[1][i]-ind[1][i-d])+ abs(ind[2][i]-ind[2][i-d]));

    scanf("%d", &q);

    while(q--)
        scanf("%d %d", &n, &m), printf("%d\n", sum[m]-sum[n]);
}

