#include <iostream>
#include <cmath>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    int n, ans, s;
    while(cin>>n)
    {
        ans = 0;
        for(int i = 0; i<n; i++)
            cin>>s, ans+=s;

        if(ans>=ceil(2*n/3.0))
            cout<<"impeachment\n";
        else
            cout<<"acusacao arquivada\n";
    }
}

