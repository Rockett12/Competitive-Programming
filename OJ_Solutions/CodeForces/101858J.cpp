#include <bits/stdc++.h>
#define F first
#define S second
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define MAXM 1000005
#define MAXK 1000001
#define MAXN 100001
using namespace std;
typedef pair<int, int> ii;
int ft[MAXM];
int main()
{
    int n, m, a, y = 0, ans;
    scanf("%d", &n);
    m = n;
    while(n--){
        scanf("%d", &a);
        ans = 0;
        for(int x = a; x ;x-=x&(-x))
            ans+=ft[x];

        printf("%d\n",m+ans-y);
        y++;
        for(int x = a+1; x<=MAXK;x+=x&(-x))
            ft[x]++;

    }
}

