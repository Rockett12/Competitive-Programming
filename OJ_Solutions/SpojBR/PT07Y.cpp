#include <iostream>
#include <algorithm>
#include <vector>
#define _ ios::sync_with_stdio(0);
using namespace std;

int pai[10005], r[10005], compa;

int findSet(int x)
{
    return pai[x]==x? x : pai[x] = findSet(pai[x]);
}

bool join(int x, int y)
{
    x = findSet(x);
    y = findSet(y);
    if(x == y)
        return 1;

    if(r[x]>r[y])
        pai[y]=x;
    else
    {
        if(r[x]==r[y])
            r[y]++;
        pai[x]=y;
    }

    compa--;

    return 0;

}

int main()
{_
	int n, m;
	int i,a;
    bool f=1;
    cin>>n>>m;
    if(m!=n-1)
        cout<<"NO\n";
    else
    {

        for( i =1; i<=n; ++i)
            pai[i]=i, r[i]=0;

        compa = n;
        while(m--)
        {
            cin>>i>>a;
            if(join(i, a))
                f= 0;

        }

        if(compa==1 && f)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

}

