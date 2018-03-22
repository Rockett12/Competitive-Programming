#include <vector>
#include <cstdio>
#define MAXN 112345
using namespace std;
typedef long long int ll;
ll sum, inv;
int main()
{
    int n, a, b, x;
    vector<ll> ft;
    int v[MAXN];
    while(scanf("%d", &n)!=EOF)
    {
        ft.assign(n+1, 0);
        for(int i = 0; i<n; ++i)
        {
            scanf("%d", v+i);
        }
        inv = 0;
        for(int i = n-1; i>=0; --i)
        {
            for(x = v[i]-1; x; x-=(x&-x))
                inv+=ft[x];

            for(x = v[i]; x<=n; x+=(x&-x))
                ++ft[x];
        }

        inv = (((ll)n*((ll)n-1))>>1LL) - inv;

        printf("%lld\n", inv);
    }

}

