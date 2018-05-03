#include <iostream>
#include <stack>
#define $ ios::sync_with_stdio(0);
#define MAXN 112345
using namespace std;
typedef long long int ll;
int hist[MAXN];


int main()
{$
    stack<int> p;

    int n , m, topo, i;
    ll area, maior;
    while(cin>>n && n)
    {
        area = 0;
        maior = -1;

        for(i = 0; i<n; ++i)
            cin>>hist[i];

        for(i =0; i<n;)
        {
            m = hist[i];
            if(p.empty() || hist[p.top()]<=m )
                p.push(i++);
            else
            {
                topo = p.top(); p.pop();
                if(p.empty())
                    area = (ll)hist[topo]*(ll)i;
                else
                    area = (ll)hist[topo]*(ll)(i-p.top()-1);
                maior = max(maior, area);

            }
        }

        while(!p.empty())
        {
            topo = p.top(); p.pop();
            if(p.empty())
                area = (ll)hist[topo]*(ll)i;
            else
                area = (ll)hist[topo]*(ll)(i-p.top()-1);

            maior = max(maior, area);

        }


        cout<<maior<<'\n';
    }
}
