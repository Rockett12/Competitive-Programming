#include <iostream>
#include <set>
#include <algorithm>
#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_

    int t, n, a, m;

    set<int> seta, setb, setc;
    while((cin>>t>>n)&&t)
    {
        seta.clear();
        setb.clear();
        setc.clear();

        while(t--)
        {
            cin>>a;
            seta.insert(a);
        }

        while(n--)
        {
            cin>>a;
            if(seta.find(a)!=seta.end())
                setb.insert(a);
            setc.insert(a);
        }
        m = min((int)seta.size(),(int)setc.size());
        m-=(int)setb.size();
        cout<<m<<endl;
    }

    return 0;
}
