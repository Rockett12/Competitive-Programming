#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 1005
#define MAXF 55
using namespace std;
int dp[MAXF][MAXN], stamp[MAXF][MAXN], TC=0, valor[MAXF], cost[MAXF], flores, card;

int knap(int flor, int space)
{
    if(flor == flores || space ==0)
        return dp[flor][space] = 0;

    if(stamp[flor][space]==TC)
        return dp[flor][space];

    int npega = knap(flor+1, space);
    int pega = -1;
    if(space>=cost[flor])
    {
        pega = valor[flor]+knap(flor+1, space - cost[flor]);
    }

    pega = max(pega, npega);

    stamp[flor][space] = TC;
    return dp[flor][space] = pega;

}

int main()
{$


    while((cin>>card>>flores)&&card)
    {
        ++TC;
        for(int i = 0; i<flores; ++i)
            cin>>cost[i]>>valor[i];
        cout<<"Teste "<<TC<<endl;
        cout<<knap(0, card)<<endl;
        cout<<endl;

    }
}

