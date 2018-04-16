#include <cstdio>
#include <algorithm>
#define MAXN 112345
using namespace std;

int main()
{
    int n, i;
    bool f;
    long long int a,b, v[MAXN];

    while(scanf("%d", &n)!=EOF && n)
    {
        for(i = 0; i<n; ++i)
            scanf("%lld", v+i);

        sort(v, v+n);

        for(i  = 0, f = 0; i<n; i+=2)
            if(v[i]^v[i+1])
                if(f)
                    b = v[i+1];
                else
                    a = v[i], b = v[i+1],f=1;


        printf("%lld %lld\n",a,b);
    }
}
