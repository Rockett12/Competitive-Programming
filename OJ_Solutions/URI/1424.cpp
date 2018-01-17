#include <iostream>
#include <algorithm>
#include <map>

#define _ ios::sync_with_stdio(0);

using namespace std;
typedef pair<int, int> ii;
typedef multimap<int, int> mii;

int main()
{_
    int n, m,i, k, j;
    mii mp;
    mii::iterator it;
    while(cin>>n>>m)
    {
        mp.clear();
        for(i =1; i<=n; ++i)
        {
            cin>>k;
            mp.insert(ii(k, i));
        }


        while(m--)
        {
            cin>>n>>k;
            j = (int)mp.count(k);
            if(j<n)
                cout<<0<<endl;
            else
            {
                it = mp.equal_range(k).first;
                n--;
                while(n--)
                    ++it;

                cout<<it->second<<endl;
            }
        }
    }
}
