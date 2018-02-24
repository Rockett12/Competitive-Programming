#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stack>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456789
#define F first
#define S second
#define pb push_back
using namespace std;

int main()
{$
    int a, b;

    cin>>a>>b;
    vector<int> v;
    v.pb(b);
    while(b>a)
    {
        if(b%10==1)
            b/=10;
        else if(!(b&1))
            b>>=1;
        else
            break;
        v.pb(b);
    }
    if(b==a)
    {
        cout<<"YES\n";
        cout<<(int)v.size()<<endl;

        for(int i = (int)v.size()-1; i>=0; --i)
        {
            if(i!= (int)v.size()-1)
                cout<<" ";

            cout<<v[i];
        }
    }
    else cout<<"NO";
    cout<<endl;


}

