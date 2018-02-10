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
    int n, a;
    while(cin>>s)
    {
        cin>>n;
        while(n--)
        {
            cin>>a;
            cout<<s[a-1];
        }
        cout<<endl;
    }
}
