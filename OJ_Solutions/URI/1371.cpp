#include <cstdio>
#include <cmath>

using namespace std;


int main()
{
    int n;

    while(scanf("%d", &n)&&n)
    {
        printf("1");
        for(long long int i = 2; i*i<=n; ++i)
        {

            printf(" %lld", i*i);
        }
        puts("");

    }
}

