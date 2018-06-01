#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAXN 112
#define INF 999999999.0
using namespace std;
struct TVector{
    int x, y, r;
    TVector(){}
    TVector(int _x, int _y, int _r):x(_x),y(_y),r(_r){}
};
double adj[MAXN][MAXN];
vector<TVector> pontos;
void fw(int n)
{
    double d;
    for(int k = 1; k<=n; ++k)
        for(int i= 1; i<=n; ++i)
            for(int j = 1; j<=n ; ++j)
                if((d = adj[i][k]+adj[k][j])<adj[i][j])
                    adj[i][j] = d;
}

int main()
{
    int t, n, m,x,y,r;
    double h, d;
    while(scanf("%d", &n)&&n)
    {
        pontos.clear();
        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=n; ++j)
                adj[i][j] = INF;

        for(int i = 1; i<=n; ++i)
        {
            scanf("%d %d %d", &x, &y, &r);

            pontos.push_back(TVector(x,y,r));
        }

        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=n; ++j)
            {
                if((h = hypot(pontos[i-1].x-pontos[j-1].x, pontos[i-1].y-pontos[j-1].y))<=(double)pontos[i-1].r)
                {
                    adj[i][j] = h;
                }
            }

        fw(n);

        scanf("%d",&t);

        while(t--)
        {
            scanf("%d %d", &x, &y);
            if((d = adj[x][y])>(INF-5))
                puts("-1");
            else
                printf("%d\n", (int)d);
        }

    }
}
