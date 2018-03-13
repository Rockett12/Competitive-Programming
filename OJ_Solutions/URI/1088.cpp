#include <iostream>
#include <cstdio>
#include <vector>
#define MAXN 112345
using namespace std;
typedef long long int ll;

int v[MAXN];
int main()
{
    int n;
    vector<ll>ft;
    ll inv;
    while(scanf("%d", &n)&&n)
    {
        ft.assign(n+1, 0);
        inv = 0;
        for(int i = 0; i<n; ++i)
            scanf("%d", v+i);

        for(int i = n-1; i>=0; --i)
        {
            for(int j = v[i]-1; j>0; j-=(j&-j))
                inv+=ft[j];

            for(int j=v[i]; j<=n; j+=(j&-j))
                ++ft[j];
        }

        printf("%s\n", inv&1?"Marcelo":"Carlos");

    }
}
