#include <iostream>
#include <algorithm>
#include <vector>
#define pb push_back
using namespace std;

int main()
{
    int n, a, k,ant;
    cin>>n>>k;
    vector<int> v;
    for(int i = 0; i<n; ++i)
    {
        cin>>a;
        v.pb(a);
    }

    sort(v.rbegin(), v.rend());

    a = 1;
    ant = v[0];
    for(int i = 1; i<n && (k-1>0 || v[i]==ant); ++i, --k, a++)
        ant = v[i];

    cout<<a<<"\n";
}

