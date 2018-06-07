#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAXM 412345
#define MAXN 112
#define F first
#define S second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int, int> ii;
typedef pair<ii , int> inp;
graph adj;
int cur = 0, cur2 = 0, TC = 0, label[MAXN], seen[MAXN], weight[MAXN];
const int INF = 0x3f3f3f3f;
struct edge{
    int to, f, c;
} e[MAXM];

void addge(graph& g, int a , int b , int cp, int rc){
    e[cur].to = b, e[cur].c = cp, e[cur].f = 0;
    g[a].push_back(cur++);
    e[cur].to = a, e[cur].c = rc, e[cur].f = 0;
    g[b].push_back(cur++);

}

graph contract(graph& g, int s, int t)
{
    graph con((int)g.size()-1, vi());
    for(int i = 1; i<g.size(); ++i) label[i] = i;
    swap(label[t], label[(int)g.size()-1]);

    int cap = 0, v, resf;
    for(int i = 1; i<g.size(); ++i)
    {
        if(i == s || i == t) continue;
        cap = 0;
        for(int j : g[i])
        {
            v = e[j].to, resf = e[j].c -e[j].f;
            if(v==s || v==t)cap+=resf;
            else if(i<v) addge(con, label[i], label[v], resf, resf);
        }
        if(cap>0) addge(con,label[i], label[s], cap, cap);
    }
    if(~TC&1)
        cur = 0;
    return con;
}

int mincut(graph g)
{
    int mincap = INF,s,t, resf,w;
    while((int)g.size()>2){
        for(int i = 1; i<(int)g.size(); ++i)weight[i] = 0;
        ++TC;
        s = t = -1;
        for(int i = 1, v; i<g.size(); ++i){
            v = -1;
            for(int j = 1; j<(int)g.size(); ++j){
                if(seen[j]==TC) continue;
                if(v == -1 || weight[j] > weight[v]) v = j;
            }

            s = t;
            t = v;

            for(int j : g[v]){
                w = e[j].to;
                resf = e[j].c-e[j].f;
                if(seen[w]<TC) weight[w] +=resf;
            }

            seen[v] = TC;
        }

        mincap = min(mincap, weight[t]);
        g = contract(g, s, t);
    }

    return mincap;
}

int main()
{
    int a,b,c, t;
    int n, m, resp;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);
        adj.assign(n+1, vi());
        ++TC;
        if(TC&1)
            ++TC;
        while(m--)
        {
            scanf("%d %d %d", &a, &b, &c);
            addge(adj, a,b,c,c);
        }

        resp = mincut(adj);
        printf("%d\n", resp);
    }
}
