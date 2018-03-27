#include <cstdio>
#include <algorithm>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define F first
#define S second
#define MAXN 113245
using namespace std;
typedef long long int ll;
typedef pair<int ,int> ii;
typedef vector<ii> vi;
int main()
{
    int n, k, t, a,b,c;
    int id;
    ii v[MAXN];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &k);
        for(int i = 0; i<n; ++i)
        {
            scanf("%d %d %d %d", &id, &a, &b,&c);
            v[i] = ii(-(a*b*c), id);
        }

        sort(v, v+n);
        for(int i =0; i<k; ++i)
            v[i].F = v[i].S;

        sort(v, v+k);
        for(int i =0; i<k; ++i)
           printf("%d%s",v[i].S, i==k-1?"\n":" ");
    }
}
