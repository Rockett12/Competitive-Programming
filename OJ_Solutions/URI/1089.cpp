#include <vector>
#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
using namespace std;
int onda[MAXN];
int main()
{$
    int n, resp;
    while(cin>>n && n)
    {
        resp = 0;
        for(int i = 1; i<=n ; ++i)
            cin>>onda[i];
        onda[0] = onda[n];
        onda[n+1] = onda[1];

        for(int i = 1; i<=n ; ++i)
            if(onda[i]>onda[i-1] && onda[i]> onda[i+1])
                ++resp;

        cout<<(resp<<1)<<'\n';
    }
}

