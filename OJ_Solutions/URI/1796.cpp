#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;
int main()
{$
    string s;
    int n, a, b=0;
    cin>>n;
    for(int i =0; i<n; ++i)
    {
        cin>>a;
        b+=(!a);

    }
    if(b>(n>>1))
        cout<<"Y\n";
    else cout<<"N\n";
}

