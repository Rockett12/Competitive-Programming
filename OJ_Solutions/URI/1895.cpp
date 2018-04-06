#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int v[2];
int main()
{
    int n, t, l, c, s;

    cin>>n>>t>>l;

    for(int i =1; i<n; ++i)
    {
        cin>>s;
        if((c =abs(s-t))<=l)
            v[i&1]+=c, t= s;
    }

    cout<<v[1]<<" "<<v[0]<<"\n";

}

