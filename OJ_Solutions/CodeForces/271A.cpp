#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int v[10];
int main()
{
    int n;
    scanf("%d", &n);

    int i,j;
    while(++n)
    {
        memset(v, -1, sizeof(v));
        j=n;
        i = 1;
        while(j)
        {
            if(v[j%10]!=-1)
                i = 0;
            v[j%10]=1;
            j/=10;
        }

        if(i)
            break;
    }
    printf("%d\n", n);
    return 0;
}

