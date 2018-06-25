#include <cstdio>
#include <algorithm>
#define MAXN 1123
using namespace std;

int v[MAXN];
int main()
{
    int n , cost, major, sum;
    while(scanf("%d %d", &n, &cost)!=EOF){

        for(int i = 1; i<=n; ++i)
        {
            scanf("%d", v+i);
            v[i]-=cost;
        }

        major = 0, sum= 0;

        for(int i = 1; i<=n; ++i)
        {
            sum+=v[i];

            if(sum>major)
                major = sum;
            if(sum<0)
                sum = 0;
        }

        printf("%d\n", major);
    }
}

