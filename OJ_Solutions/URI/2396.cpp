#include <cstdio>
#include <algorithm>
#define F first
#define S second
#define MAXN 112

using namespace std;
typedef pair<int,int> ii;
ii v[MAXN];
int main()
{
    int n, m;
    scanf("%d %d",&n, &m);
    for(int i = 0, sum; i<n; ++i)
    {
        sum = 0;
        for(int j = m, x; j--;)
            scanf("%d", &x), sum+=x;

        v[i].F = sum;
        v[i].S = i+1;
    }

    sort(v, v+n);

    printf("%d\n%d\n%d\n", v[0].S, v[1].S, v[2].S);
}
