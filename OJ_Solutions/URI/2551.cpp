#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define pb push_back
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int n, a, b;
    double c;
    vector<int> dias;

    while(cin>>n)
    {
        c = 0;
        dias.clear();
        for(int i = 1; i<=n; ++i)
        {
            cin>>a>>b;
            if(b/(double)a > c)
                c = b/(double)a, dias.pb(i);
        }

        sort(dias.begin(), dias.end());

        for(int i = 0; i<(int)dias.size(); ++i)
            cout<<dias[i]<<endl;
    }
}

