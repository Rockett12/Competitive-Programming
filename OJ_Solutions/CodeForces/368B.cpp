#include <iostream>
#include <algorithm>
#include  <vector>
#include <cstring>
#define _ ios::sync_with_stdio(0);



using namespace std;

int fg[100005], ts[100005] , n, m, aux[100005], a;

int main()
{_

    cin>>n>>m;

    for(int i =1; i<=n; ++i)
    {
        cin>>ts[i];
    }
    aux[n]=1;
    fg[ts[n]]=1;
    for(int i =n-1; i>=1; --i)
    {
        if(!fg[ts[i]])
            aux[i] = aux[i+1]+1;
        else aux[i] = aux[i+1];

        fg[ts[i]]=1;
    }
    for(int i =1; i<=m; ++i)
    {
        cin>>a;
        cout<<aux[a]<<endl;
    }
}

