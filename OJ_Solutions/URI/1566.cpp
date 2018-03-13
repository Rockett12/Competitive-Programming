#include <iostream>
#include <cstdio>

using namespace std;

int v[250];
int main()
{
    int n,m, x, f;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &m);

        while(m--)
        {
            scanf("%d", &x);
            ++v[x];
        }
        f = 0;
        for(int i = 20; i<=230; ++i)
            while(v[i])
            {
                if(f)
                    printf(" ");
                printf("%d", i);
                f = 1;
                --v[i];
            }

        puts("");
    }
}

