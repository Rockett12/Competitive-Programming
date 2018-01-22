#include <iostream>
#include <algorithm>
#include <vector>
#define _ ios::sync_with_stdio(0);
#define PB push_back
using namespace std;
typedef vector<int> vi;

int main()
{_
    int n, m, a,c;
    bool f = 0;
    cin>>n;
    vector<vi> vec;
    while(n--)
    {
        if(f)
            cout<<endl;

        cin>>m>>c;
        vec.clear();
        vec.resize(m);
        while(c--)
        {
            cin>>a;
            vec[a%m].PB(a);
        }


        for(c = 0; c<m; c++)
        {
            cout<<c;
            for(a = 0; a<(int)vec[c].size(); ++a)
            {
                cout<<" -> "<<vec[c][a];
            }
            cout<<" -> \\\n";
        }

        f = 1;

    }

}

