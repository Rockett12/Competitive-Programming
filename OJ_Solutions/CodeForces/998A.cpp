#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#define F first
#define S second
#define INF 0x3f3f3f3f
#define MAXN 112345
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef long long int ll;

vector<ii> v;
int main()
{
    int n, m, k,a,b,c;
    cin>>n;
    for(int i = 0; i<n; ++i)
        cin>>k, v.push_back({k, i+1});
    if(n<=1)
        cout<<-1<<endl;
    else if(n==2 && v[0]==v[1])
        cout<<-1<<endl;
    else{
        sort(v.begin(), v.end());
        a = b = 0;
        a= v[0].F;
        for(int i = 1; i<(int)v.size(); ++i)
            b+=v[i].F;

        if(a!=b)
        {
            cout<<(int)v.size()-1<<endl;
            cout<<v[1].S;
            for(int i = 2; i<(int)v.size(); ++i)
                cout<<' '<<v[i].S;
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
