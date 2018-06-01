#include <cstdio>
#include <algorithm>
#define MAXN 1123
using namespace std;

int cheg[MAXN], sorted[MAXN];
int main()
{
    int n , m;
    scanf("%d", &m);
    int resp;
    while(m--)
    {
        scanf("%d", &n);
        for(int i = 0, x; i<n;++i)
        {
            scanf("%d",  &x);
            sorted[i] = cheg[i] = -x;

        }

        sort(sorted, sorted+n);
        resp = 0;
        for(int i = 0; i<n; ++i)
        {
            if(cheg[i]==sorted[i])
                ++resp;
        }

        printf("%d\n", resp);

    }
}

