#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,b;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", __gcd(a,b));
    }
}

