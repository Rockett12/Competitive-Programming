#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define oo 999999999
#define pb push_back

using namespace std;
typedef long long int ll;
char mat[55][55];
ll row[55];
int main()
{$
    int n, m, f=1, op=1;
    cin>>n>>m;

    for(int i = 0;i<n; ++i)
        for(int j = 0 ;j<m; ++j)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='#')
                row[i]|= 1LL<<j;
        }


    for(int i = 0; i<n-1 && f; ++i)
        for(int j  = i+1; j<n && f; ++j)
            if(row[i]!=row[j])
                if(row[i]&row[j])
                    f=0;

    if(f)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

