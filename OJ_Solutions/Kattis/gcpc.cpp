#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <fstream>
#define F first
#define S second
#define oo 999999999
#define pb push_back
#define $ ios::sync_with_stdio(0);
#define MAXN 112345
#define MAXM 1123456
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<int ,int > ii;
typedef pair<int ,ii > iii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vii> graph;
bool tana[MAXN];

int main()
{
    int n , m, c,k,a,b, id;
    priority_queue<iii> p;
    iii cara;

    cin>>n>>m;
    vii v;
    v.assign(n+1,ii(0,0));
    while(m--)
    {
        cin>>a>>b;
        v[a].F--;
        v[a].S+=b;
        if(a==1)
            while(!p.empty())
            {
                id = p.top().S.S;
                cara = p.top();
                if(v[id].F == cara.F && v[id].S == cara.S.F)
                    if(v[1].F < v[id].F || v[1].F == v[id].F && v[1].S <= v[id].S)
                        p.pop(), tana[id]=0;
                    else
                        break;
                else
                    p.pop(), p.push(mp(v[id].F,mp(v[id].S, id)));
            }
        else
            if(!tana[a] && (v[a].F < v[1].F || (v[a].F == v[1].F && v[a].S < v[1].S)))
                p.push(mp(v[a].F,mp(v[a].S, a))), tana[a]=1;

        cout<<(int)p.size()+1<<endl;
    }

}
