#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define S second
#define F first
#define MAXN 112345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
typedef long long int ll;

map<ii,int> mp;
vi vec;
int gcd(int a, int b){return b==0? a : gcd(b, a%b);}

int main()
{
    int t, n , m,ans=0,a,b,c,d, k,x,y;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for(int i = 1; i*i<=d; ++i)
    {
        if(d%i==0)
        {
            vec.push_back(i);
            if(d/i!=i)
                vec.push_back(d/i);
        }
    }
    int tam = (int)vec.size();
    for(int i = 0; i<tam; ++i)
    {
        for(int j = 0; j<tam; ++j)
        {
            y = vec[j];
            x = vec[i];
            if(x > y)
                x^=y, y^=x, x^=y;

            if(x<a || y>b)
                continue;
            k = gcd(x,y);
            if(k==c)
            {

                if((ll)x*(ll)(y/k)==(ll)d)
                {
                    if(!mp[ii(x,y)])
                        ++ans,mp[ii(x,y)]=1;

                    if(x!=y)
                        if(!mp[ii(y,x)])
                            ++ans, mp[ii(y,x)]=1;
                }
            }
        }
    }

    printf("%d\n", ans);
}
