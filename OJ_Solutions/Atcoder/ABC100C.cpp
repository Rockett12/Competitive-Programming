#include <cstdio>

using namespace std;

int main()
{
    int n, ans = 0, x;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        while(!(x&1))
            ++ans, x>>=1;
    }
    printf("%d\n", ans);
}
