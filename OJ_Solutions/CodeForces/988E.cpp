#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <map>
#include <iostream>
#define MAXN 1123
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define mp make_pair
#define INF 0x3f3f3f3f
using namespace std;
typedef pair<int, pair<string, int> > ii;
bool ism25(string s);
int getMsb(int a);

string b;
map<string, bool> seen;
queue<ii>q;
ii sai;

int bfs(string s, int init)
{
    if((int)s.size()==1)
        return -1;

    q.push({0,{s,init}});
    seen[s] = 1;
    int cur, guia, tam, resp = INF, dist;
    char x;
    while(!q.empty())
    {
        sai = q.front(); q.pop();
        dist = sai.F;
        if(ism25(sai.S.F) && dist<resp )
            resp  = dist;

        if(dist>resp) continue;

        b = sai.S.F;
        cur = sai.S.S;
        tam = (int)b.size()-1;
        for(int i = cur, j, k, l; i; i-=(1<<j))
        {
            j = getMsb(i);
            if(j==tam) continue;

            //swap bits na bitmask guia
            guia = cur;
            k = (guia&(1<<j))<<1;
            l = (guia&(1<<(j+1)))>>1;
            guia&=(~((1<<j)|(1<<(j+1))));
            guia|=k|l;


            x = b[j];

            b[j] = b[j+1], b[j+1] = x;

            if(b[0]!='0' && !seen[b])
            {
                seen[b]= 1;
                q.push({dist+1,{b, guia}});
            }

            b[j+1] = b[j], b[j] = x;

        }
    }

    return resp == INF? -1: resp;
}

int vis[10];
int main()
{$

    string s;
    cin>>s;
    int resp, cnt=0, init;
    char target[] = {'2','5','7'}, x;
    init = 0;
    for(int i = (int)s.size()-1;i>=0; --i)
    {
        x = s[i];
        for(int j = 0; j<3; ++j)
        {
            if(x == '0' || x==target[j] && !vis[j])
            {
                init|= (1<<i);
                vis[j] = 1;
                break;
            }
        }

    }
    resp = bfs(s, init);

    cout<<resp<<'\n';
}

bool ism25(string s)
{
    if(s[0] == '0')
        return 0;
    int tam = (int)s.size();
    b = "";
    b += s[tam-2];
    b += s[tam-1];
    return ( b == "25" || b == "75" || b== "50" || (b == "00" && tam>2));
}

int getMsb(int a)
{
    int r = 0;
    while(a>>=1)
        ++r;
    return r;
}
