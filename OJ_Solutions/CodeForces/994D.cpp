#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 112345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
typedef long long int ll;

int fis[14],sec[14];
int linka[20], lk[20];
int main()
{
    int a,b, n , m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i<n; ++i)
    {
        scanf("%d %d", &a, &b);
        fis[i] = (1<<a )| (1<<b);
    }

    for(int i = 0; i<m; ++i)
    {
        scanf("%d %d", &a, &b);
        sec[i] = (1<<a )| (1<<b);
    }

    for(int i = 0; i<n; ++i)
    {
        for(int j = 0, k; j<m; ++j)
        {
            if(fis[i]==sec[j]) continue;
            if(k = (fis[i]&sec[j]))
                linka[i]|=(k), lk[j]|=(k);
        }
    }

    int resp= 0, aux=0;
    bool f = 1;
    for(int i = 0; i<n || i<m; ++i)
    {
        resp |= linka[i]|lk[i];
        if(linka[i] && (linka[i]&(linka[i]-1)) || lk[i] && (lk[i]&(lk[i]-1)))
            f = 0;
    }

    if(!f)
        puts("-1");
    else if(resp>0 && (resp&(resp-1))==0){
        while(resp>1)
            aux++, resp>>=1;
        resp = aux;
        printf("%d\n", resp);
    }
    else
        puts("0");
}

