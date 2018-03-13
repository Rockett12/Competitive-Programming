#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAXN 1123456
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define oo 999999999
#define pb push_back

using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ii> vi;
typedef vector<vi> graph;

int main()
{$
    int n, m, k, a, b, c, f, d, mini;
    string s, ss;

    char x;
    priority_queue<int> p1, p2;
    while(cin>>n && n)
    {
        while(!p1.empty())
            p1.pop();
        while(!p2.empty())
            p2.pop();

        cin>>s;
        f = 0;
        mini = oo;
        for(int i = 0; i<(int)s.size() && !f ; ++i)
            if((x = s[i])=='Z')
                f = 1;
            else if(x == 'R')
                p1.push(i);
            else if(x == 'D')
                p2.push(i);

        if(f)
            cout<<0<<endl;
        else
        {
            while(!p1.empty() && !p2.empty())
            {
                a = p1.top();
                b = p2.top();
                mini = min(mini, abs(a-b));

                if(a>b)
                    p1.pop();
                else
                    p2.pop();
            }

            cout<<mini<<endl;
        }
    }
}

