#include <cstdio>

using namespace std;

int main()
{
    int n, a, item;
    while(scanf("%d", &n)!=EOF)
    {
        item = 0;
        for(int i = 1; i<=n; ++i)
            item^=i;

        for(int i = 1; i<n; ++i)
            scanf("%d", &a), item^=a;

        printf("%d\n", item);
    }

}

