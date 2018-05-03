#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define F first
#define S second
using namespace std;
typedef pair<int, string> ii;

int main()
{$
    int n, m, i, j=0,mini, major, sum;
    string s;
    vector<ii> v;
    while(cin>>n && n)
    {
        v.clear();
        while(n--)
        {
            i = 12;
            mini = 1004;
            major = -1;
            sum = 0;
            cin>>s;
            while(i--)
            {
                cin>>m;
                if(m>major)
                    major = m;
                if(m<mini)
                    mini = m;
                sum+=m;
            }

            sum-=mini+major;
            v.pb(ii(-sum, s));
        }
        sort(v.begin(), v.end());
        cout<<"Teste "<<++j<<'\n';
        cout<<1<<' '<<(m = -v[0].F) <<' '<<v[0].S<<'\n';
        for(i = 1,n = 1; i<(int)v.size(); ++i)
        {
            if(-v[i].F!=m)
                n = i+1;
            cout<<n<<' '<<(m = -v[i].F) <<' '<<v[i].S<<'\n';
        }
        cout<<'\n';
    }
}

