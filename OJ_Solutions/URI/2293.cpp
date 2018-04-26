#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;
int rowc[105];
int main()
{$
    int n, m, a,best=-1, row;
    cin>>n>>m;

    while(n--)
    {
        row = 0;
        for(int i = 0; i<m; ++i)
        {
            cin>>a;
            rowc[i]+=a;
            row+=a;
        }

        if(row>best)
            best = row;
    }

    for(int i = 0; i<m ; ++i)
        if(rowc[i]>best)
            best = rowc[i];
    cout<<best<<'\n';
}
