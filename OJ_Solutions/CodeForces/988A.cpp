#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#define MAXN 1123
using namespace std;
const int INF = 0x3f3f3f3f;

int seen[MAXN], TC=0;
vector<int> v;
int main()
{
    int n , m, a, b,c;
    ++TC;

    scanf("%d %d", &n, &m);
    for(int i = 1; i<=n; ++i)
    {
        scanf("%d", &a);
        if(seen[a]<TC)
        {
            seen[a] = TC;
            v.push_back(i);
        }
    }

    if((int)v.size()>=m)
    {
        printf("YES\n%d", v[0]);
        for(int i = 1; i<m; ++i)
            printf(" %d", v[i]);

        puts("");
    }
    else puts("NO");
}
