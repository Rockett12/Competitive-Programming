#include <vector>
#include <cstdio>
#include <algorithm>
#define MAXM 112345
#define MAXN 100000
using namespace std;
typedef long long int ll;
int ft[MAXM];
int main()
{
    int ip, m,resp, pc, na, sum, x;

    while(scanf("%d %d", &ip, &m)!=EOF)
    {
        resp = 0;

        while(m--)
        {
            scanf("%d %d", &pc, &na);
            sum = 0;

            for(x = min(pc+ip, MAXN); x; x-=(x&-x))
                sum+=ft[x];

            for(x = max(pc-ip, 1)-1; x; x-=(x&-x))
                sum-=ft[x];

            if(sum<=na)
            {
                ++resp;

                for(x = pc; x<=MAXN; x+=(x&-x))
                    ++ft[x];
            }


        }

        printf("%d\n", resp);
        for(x = 1; x<=MAXN; x++)
            ft[x]=0;
    }
}
#include <vector>
#include <cstdio>
#include <algorithm>
#define MAXM 112345
#define MAXN 100000
using namespace std;
typedef long long int ll;
int ft[MAXM];
int main()
{
    int ip, m,resp, pc, na, sum, x;

    while(scanf("%d %d", &ip, &m)!=EOF)
    {
        resp = 0;

        while(m--)
        {
            scanf("%d %d", &pc, &na);
            sum = 0;

            for(x = min(pc+ip, MAXN); x; x-=(x&-x))
                sum+=ft[x];

            for(x = max(pc-ip, 1)-1; x; x-=(x&-x))
                sum-=ft[x];

            if(sum<=na)
            {
                ++resp;

                for(x = pc; x<=MAXN; x+=(x&-x))
                    ++ft[x];
            }


        }

        printf("%d\n", resp);
        for(x = 1; x<=MAXN; x++)
            ft[x]=0;
    }
}
