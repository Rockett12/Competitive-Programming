#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#define F first
#define S second
#define oo 999999999.9
#define pb push_back
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
#define MAXM 1123456
using namespace std;

typedef long long int ll;
typedef pair<double , string> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vii> graph;

int main()
{
    vii fst, sec;
    string s;
    int n, j, x;
    cin>>n;
    double a, b, sum, menor = oo;
    while(n--)
    {
       cin>>s>>a>>b;
       fst.pb(ii(a,s));
       sec.pb(ii(b,s));
    }

    sort(fst.begin(), fst.end());
    sort(sec.begin(), sec.end());

    vector<string> ss, resp;
    for(int i = 0; i<4; ++i)
    {
       sum = fst[i].F;
       ss.clear();
       ss.pb(fst[i].S);
       for(j =0, x=0; j<(int)sec.size() && x<3; ++j)
           if(fst[i].S!=sec[j].S)
           {
               sum+=sec[j].F;
               ss.pb(sec[j].S);
               x++;
           }
       if(sum < menor)
            resp = ss, menor = sum;
    }

    printf("%lf\n", menor);
    for(int i = 0; i<(int)resp.size(); ++i)
       cout<<resp[i]<<endl;
}
