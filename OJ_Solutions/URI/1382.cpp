#include <cstdio>
#define MAXN 112345
using namespace std;

int v[MAXN];
int main()
{
    int t, n, x;
    int inv;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i = 1; i<=n; ++i)
            scanf("%d", v+i);
        inv = 0;
        for(int i = 1; i<=n; ++i)
        {
            while(v[i]!=i)
            {
                x = v[i];
                v[i] = v[v[i]];
                v[x]=x;
                inv++;
            }
        }

        printf("%d\n", inv);
    }
}
