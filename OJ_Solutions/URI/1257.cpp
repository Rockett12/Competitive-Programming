#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);

using namespace std;


int main()
{$
    int t, n, sum;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        sum = 0;
        for(int i= 0; i<n; ++i)
        {
            cin>>s;
            for(int j = 0; j<(int)s.size(); ++j)
                sum+=i+j+(int)(s[j]-'A');
        }
        cout<<sum<<"\n";
    }
}

