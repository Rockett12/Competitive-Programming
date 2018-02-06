#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second

using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vi taken;
vector<vii> v;
priority_queue<ii> pq;
int process(int vtx)
{
    taken[vtx]=1;

    for(int i =0; i<(int)v[vtx].size(); ++i)
    {
        ii w = v[vtx][i];
        if(!taken[w.F])
            pq.push(ii(-w.S, -w.F));
    }
}

int main()
{_
    int n, m,a,b,w;
    cin>>n>>m;
    v.assign(n+1, vector<ii>());
    taken.assign(n+1, 0);
    while(m--)
    {
        cin>>a>>b>>w;
        v[a].push_back(ii(b, w));
        v[b].push_back(ii(a, w));

    }

    process(1);
    int cost = 0;
    while(!pq.empty())
    {
        ii cima = pq.top();
        pq.pop();
        a = -cima.S, b = -cima.F;
        if(!taken[a])
        {
            cost+=b, process(a);
        }
    }

    cout<<cost<<endl;
}

