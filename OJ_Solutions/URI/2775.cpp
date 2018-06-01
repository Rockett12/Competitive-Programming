#include <cstdio>
#include <iostream>
#define MAXN 1005
#define MAXM 2005
#define F first
#define S second
using namespace std;
int v[MAXN], w[MAXN], n, m;

int main()
{
    int sum;
    while(scanf("%d", &n)!=EOF)
    {
        for(int i =1 ;i<=n; ++i)
            scanf("%d", v+i);

        for(int i =1 ;i<=n; ++i)
            scanf("%d", w+i);

        sum = 0;

        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=n; ++j)
                if(v[j-1]>v[j])
                {
                    sum+=w[j-1]+w[j];
                    swap(w[j-1], w[j]);
                    swap(v[j-1], v[j]);

                }

        printf("%d\n", sum);

    }
}
