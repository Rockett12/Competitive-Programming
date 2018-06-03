#include <cstdio>
using namespace std;

int main()
{
    int n , m, last = -1, menor;
    long long int ans = 0;
    bool flag = 1;

    scanf("%d %d", &n, &m);
    while(n--)
    {
        scanf("%d", &menor);
        menor = menor < m-menor? menor : m-menor;

        if(menor>=last || (menor = m-menor)>=last)
            ans+=menor;
        else flag = 0;

        last = menor;
    }

    if(flag) printf("%lld\n", ans);
    else puts("-1");

}
