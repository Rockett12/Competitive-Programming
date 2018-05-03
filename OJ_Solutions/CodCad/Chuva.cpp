#include <iostream>
#include <algorithm>
#define MAXN 112345
#define $ ios::sync_with_stdio(0);
using namespace std;
int pool[MAXN], esq[MAXN], dir[MAXN];
int main()
{$
    int n, m=0;
    cin>>n;
    for(int i = 0; i<n; ++i)
        cin>>pool[i];
    for(int i = 1; i<n; ++i)
        esq[i] = max(pool[i-1], esq[i-1]);
    for(int i = n-2; i>=0; --i)
        dir[i] = max(pool[i+1], dir[i+1]);
    for(int i = 0; i<n; ++i)
        if(min(dir[i], esq[i])-pool[i]>0)
            ++m;

    cout<<m<<'\n';

}
