#include <vector>
#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 212345
using namespace std;

int main()
{$
    int n, k=0,a ,b, sum;
    vector<int> ft;
    string s;
    int v[MAXN];
    v[0]=0;
    while(cin>>n && n)
    {
        if(k)
            cout<<endl;

        ft.assign(n+1, 0);
        for(int i = 1; i<=n; ++i)
        {
            cin>>v[i];
            for(int x = i; x<=n; x+=(x&-x))
                ft[x]+=v[i];
        }

        cout<<"Case "<<++k<<":\n";
        while(cin>>s && s!="END")
        {
            cin>>a>>b;
            if(s[0]=='M')
            {
                sum = 0;
                for(int x = b; x; x-=(x&-x))
                    sum+=ft[x];

                for(int x = a-1; x; x-=(x&-x))
                    sum-=ft[x];

                cout<<sum<<endl;
            }
            else
            {
                for(int x = a; x<=n; x+=(x&-x))
                    ft[x]=ft[x]-v[a]+b;
                v[a]=b;
            }
        }
    }
}

