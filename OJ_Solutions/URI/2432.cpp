#include <iostream>
#include <algorithm>
#include <vector>
#define _ ios::sync_with_stdio(0);
using namespace std;

typedef long long int ll;
ll v[100100], n;

ll bbin(ll x)
{
    int ini = 0, fim = n-1, mid,resp=n;
    ll meio;

    while(ini<=fim)
    {
        mid = ini+fim;
        mid>>=1;
        meio = v[mid]*v[mid];
        if(x<=meio)
            resp = mid, fim = mid-1;
        else
            ini = mid+1;

    }

    return n-resp;

}

int main()
{_
    ll m,t, i =1, soma=0,a;

    cin>>n>>t;
    for(i =0; i<n; ++i)
    {
        cin>>v[i];
    }

    for(i =0; i<t; ++i)
    {
        cin>>m>>a;
        soma+= bbin(m*m+a*a);
    }

    cout<<soma<<endl;



}

