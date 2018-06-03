#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#define MAXN 112
#define MAXM 212
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;


map<ii, bool> dp;
int n , m;
int track[MAXN], v[MAXN];
bool book(int cur, int sum)
{
    if(cur>n && sum==m)
        return 1;
    if(cur>n)
        return 0;
    if(dp.count((ii(cur, sum))))
        return dp[ii(cur, sum)];

    bool mais = book(cur+1, sum+v[cur]), menos = book(cur+1, sum-v[cur]);
    if(!track[cur])
    {
        if(mais)track[cur]+=1;
        if(menos)track[cur]+=2;
    }
    else if(mais && track[cur]!=1) track[cur] = 3;
    if(menos && track[cur]!=2) track[cur] = 3;


    return dp[ii(cur, sum)] = (mais || menos);
}

int main()
{
    bool resp;
    char x;
    while(scanf("%d %d", &n, &m)&&(n||m))
    {
        dp.clear();
        for(int i = 1; i<=n;++i)
        {
            scanf("%d", v+i);
            track[i] = 0;
        }

        resp = book(1, 0);

        if(resp)
        {
            for(int i = 1; i<=n; ++i)
            {
                if(track[i]==1)
                    x = '+';
                else if(track[i]==2)
                    x = '-';
                else
                    x = '?';

                printf("%c", x);
            }
        }
        else
            printf("*");
        puts("");
    }
}
