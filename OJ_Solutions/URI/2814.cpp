#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <set>
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define S second
#define MAXN 112345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
typedef long long int ll;

int main()
{
    int t, n , m,a,b,c,d;
    cin>>t;
    double dec,div;
    string s;
    int dist;
    char x;
    while(t--)
    {
        cin>>n>>m;
        for(int i = 0;i<m;++i)
        {
            cin>>s;
            for(int j = 0; s[j]; ++j)
            {
                x = s[j];
                if(x=='F')
                    a = i, b = j;
                else if(x=='J')
                    c = i, d = j;
            }
        }


        dist = (int)hypot(abs(a-c)*10, abs(b-d)*10);
        div = pow(0.99, dist);
//        cout<<div<<endl;
        dec = n/div;
        cout<<(int)dec<<" dBs\n";

    }
}
