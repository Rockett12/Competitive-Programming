#include <iostream>
#include <algorithm>
#include  <vector>
#include <cstring>
#define _ ios::sync_with_stdio(0);



using namespace std;

int TC=0, ts[100005] , n, m, a;

int main()
{_
    vector<int> v;
    while(cin>>n>>m)
    {
        v.clear();
        ++TC;
        while(n--)
        {
            cin>>a;
            if(ts[a]!=TC)
            {
                v.push_back(a);
                ts[a] = TC;
            }
        }

        a = 0;
        for(int i =0; i<(int)v.size(); ++i)
        {
            if(a) cout<<" ";
            a = 1;
            cout<<v[i];
        }


        cout<<endl;
    }

}

