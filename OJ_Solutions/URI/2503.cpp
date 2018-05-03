#include <iostream>
#include <vector>
#include <algorithm>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int,int> ii;
int bom[30];
int main()
{$
    int n,m, p,t, sum;
    int v;
    vector<ii> vec;
    while(cin>>v>>p>>t && v)
    {
        vec.clear();
        for(int i = 1; i<=p; ++i)
        {
            cin>>m;
            bom[i] = (36*m)/(10*v);
        }

        for(int j = 1; j<=t; ++j)
        {
            sum = 0;
            for(int i = 1; i<=p; ++i)
            {
                cin>>m;
                if(m<bom[i])
                    sum+=min((bom[i]-m)*2, 1200);
                else
                    sum+=min(m-bom[i], 1200);
            }

            vec.push_back(ii(sum, j));
        }

        sort(vec.begin(), vec.end());

        cout<<vec[0].S;

        for(int i = 1; i<(int)vec.size(); ++i)
            cout<<' '<<vec[i].S;
        cout<<'\n';
    }
}
