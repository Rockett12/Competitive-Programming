#include <iostream>
#include <algorithm>

#define _ ios::sync_with_stdio(0);

using namespace std;
int v[100100], n, soma;

int bbin()
{
    int ini=0, fim = n, mid;

    while(ini<=fim)
    {
        mid = (ini + fim)>>1;
        if(v[mid]==(soma>>1))
            return mid;
        if(v[mid]>(soma>>1))
            fim = mid-1;
        else
            ini = mid+1;
    }
}

int main()
{_
    cin>>n;
    int a;
    for(int i =0; i<n; ++i)
    {
        cin>>a;
        soma+=a;
        if(i)
            v[i] = v[i-1]+a;
        else
            v[i]=a;
    }

    cout<<bbin()+1<<endl;
}

