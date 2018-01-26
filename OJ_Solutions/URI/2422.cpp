#include <iostream>
#include <algorithm>
#include <cmath>
#define _ ios::sync_with_stdio(0);

using namespace std;
int v[100010], n;

int bbin(int x)
{
    int ini = 1, fim = n, resp=-1;
    int mid;
    while(ini<=fim)
    {

        mid = (fim+ini)>>1;

        if( v[mid]== x)
           return mid;
        else if(v[mid]>x)
            fim = mid-1;
        else
            ini = mid+1;
    }

    return resp;
}

int main()
{_

    int a, b;
    cin>>n;
    for(int i =1; i<=n; ++i)
        cin>>v[i];
    cin>>a;
    int i =0;
    while((b = bbin(a-v[++i]))==-1);
    cout<<v[i]<<" "<<v[b]<<endl;
}

