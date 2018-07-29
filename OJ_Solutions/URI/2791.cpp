#include <cstdio>
using namespace std;
int main()
{
    int t, n, ans = 0;
    for(int i = 1; i<=4; ++i)
        scanf("%d", &n), ans+=n*i;
    printf("%d\n",ans);
}
