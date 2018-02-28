#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 105
using namespace std;

int main()
{
    int n, pai[MAXN], d, f=1;
    cin>>n;
    for(int i =0; i<n; ++i)
    {
        cin>>pai[i];
    }
    if(pai[1]==pai[0])
        f = 0;
    for(int i = 1; i<n-1 &&f; ++i)
    {
        if(pai[i-1]<pai[i] && pai[i]>pai[i+1] || pai[i-1]>pai[i] && pai[i]<pai[i+1]);
        else
            f = 0;
    }

    cout<<f<<endl;
}

