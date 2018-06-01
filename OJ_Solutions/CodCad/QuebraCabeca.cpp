#include <iostream>
#define MAXN 212345
#define $ ios::sync_with_stdio(0);
using namespace std;

int prox[MAXN];
char in[MAXN];

int main()
{$
    int n,atual=0,a,b;
    char x;
    cin>>n;
    while(n--)
    {
        cin>>a>>x>>b;
        in[a] = x;
        prox[a]=b;
    }

    while(atual!=1)
    {
        cout<<in[atual];
        atual = prox[atual];
    }
    cout<<'\n';
}

