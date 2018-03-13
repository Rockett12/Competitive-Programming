#include <queue>
#include <cstdio>
#define MAXN 112345
using namespace std;
int v[MAXN], bloc[800][800];
int main()
{
    int h, p ,f, x;
    queue<int> fila;
    while(scanf("%d %d %d",&h, &p, &f)&&h)
    {
        while(!fila.empty())
            fila.pop();

        for(int i = 1; i<=h; ++i)
            for(int j = 1; j<=p; ++j)
            {
                scanf("%d", bloc[i]+j);
                if(!bloc[i][j])
                    v[j]=i;
            }


        while(f--)
        {
            scanf("%d", &x);
            fila.push(x);
        }
        x = p;
        while(p && !fila.empty())
        {
            while(v[p] && !fila.empty())
            {
                bloc[v[p]][p] = fila.front();
                fila.pop();
                v[p]--;
            }
            p--;
        }

        for(int i = 1; i<=h; ++i)
            for(int j = 1; j<=x; ++j)
                printf("%d%s", bloc[i][j], j==x?"\n":" ");

    }

}

