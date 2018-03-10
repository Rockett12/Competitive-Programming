#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define MAXN 30
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
int TC=0, vis[MAXN], stmp[MAXN];
queue<int> q;

void bfs()
{
    int n;
    while(!q.empty())
    {
        n = q.front(); q.pop();
        stmp[n] = TC;

        for(int i =0, j; i<(int)g[n].size(); ++i)
        {
            j = g[n][i];
            if(stmp[j]!=TC)
                q.push(j);
        }
    }

}

int main()
{$
    int n, t, resp;
    char a, b;

    string s;
    cin>>t;
    getline(cin, s);
    getline(cin, s);

    while(t--)
    {
        ++TC;
        if(TC!=1)
            cout<<endl;
        getline(cin, s);
        n = (int)s[0]-'A'+1;
        g.clear();
        g.assign(n+1, vi());
        s = "";
        while(getline(cin, s)&&s!="")
        {
            a = s[0];
            b = s[1];
            g[(int)a-'A'].pb((int)b-'A');
            g[(int)b-'A'].pb((int)a-'A');
            s="";
        }
        resp = 0;
        for(int i = 0; i<n; ++i)
        {
            if(stmp[i]!=TC)
                resp++, q.push(i), bfs();
        }

        cout<<resp<<endl;
    }
}

