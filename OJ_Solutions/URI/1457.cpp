#include <cstdio>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{
    char a[100];
    int n, k, b;
    long long int s;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%s", &b, a);
        s = b;
        for(k =0; a[k]!='\0'; ++k);

        for(int i = 1; b-i*k>0; ++i)
            s*=(b-i*k);

        printf("%lld\n", s);
    }
}

