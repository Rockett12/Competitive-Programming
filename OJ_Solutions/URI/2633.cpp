#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;


int main()
{$
    int n,f=1, a, b,m;
    cin>>n>>m;
    cin>>a;
    while(--n)
    {
        cin>>b;
        if(b-a>m)
        {
            f =0;
            break;
        }
        a = b;
    }
    if(42195-b>m)
    {
        f =0;

    }
    if(f)
        cout<<"S\n";
    else cout<<"N\n";


}

