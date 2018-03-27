#include <cstdio>
#define MAXN 112345
using namespace std;
int pens[MAXN];
int main()
{
    int n, a, item;
    for(int i = 1; i<=100000; ++i)
            pens[i] = i^pens[i-1];

    while(scanf("%d", &n)!=EOF)
    {
        item = 0;
        for(int i = 1; i<n; ++i)
            scanf("%d", &a), item^=a;

        printf("%d\n", item^pens[n]);
    }

}
