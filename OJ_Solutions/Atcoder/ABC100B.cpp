#include <cstdio>
#include <cmath>
using namespace std;
int bxp(int base, int exp)
{
    int ans = 1;
    while(exp)
    {
        if(exp&1)
            ans*=base;
        base*=base;
        exp>>=1;
    }
    return ans;
}
int main()
{
    int n , m, ans;
    scanf("%d %d", &n, &m);

    if(m==100)
        m = 101;
    ans = m*bxp(100, n);
    printf("%d\n", ans);

}

