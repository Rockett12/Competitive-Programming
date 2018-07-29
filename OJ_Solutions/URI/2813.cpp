#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
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

int h, of;
int main()
{
    int t, n , m,i,j, ans1=0, ans2=0;
    string s, ss;
    cin>>n;
    while(n--)
    {
        cin>>s>>ss;
        if(s=="chuva")
        {
            if(h)
                h--;
            else ans1++;
            of++;

        }
        if(ss=="chuva")
        {
            if(of)
                of--;
            else ans2++;
            h++;
        }
    }

    cout<<ans1<<' '<<ans2<<'\n';
}
