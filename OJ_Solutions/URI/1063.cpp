#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define $ ios::sync_with_stdio(0);
#define pb push_back
int main()
{$
    int n, m, f;
    char v[50], g[50];
    stack<char> p;
    string s;
    char x;

    while(cin>>n && n)
    {

        s="";
        f = 1;

        while(!p.empty())
            p.pop();
        for(int i = 0; i<n; ++i)
            cin>>v[i];

        for(int i = 0; i<n; ++i)
            cin>>g[i];

        for(int i = 0, j =0; i<n && f;)
        {
            while(j<n && g[i]!=v[j])
                s+="I", p.push(v[j++]);

            if(j<n && g[i]==v[j])
                s+="I", p.push(v[j++]);

            while(!p.empty() && g[i]==p.top())
            {
                s+="R";
                p.pop();
                ++i;
            }

            if(j==n && !p.empty())
                f=0;
        }

        if(f)
            cout<<s<<endl;
        else
            cout<<s<<" Impossible\n";
    }



}

