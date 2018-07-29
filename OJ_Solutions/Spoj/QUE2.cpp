#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAXN 11234
#define INF 0x3f3f3f3f
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vi;
typedef vector<vi> graph;
vi vec;
vector<int> ans;
int tall[MAXN];
int main()
{
    int n, m, k,t, major;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vec.clear();
        ans.clear();
        for(int i = 0, x; i<n; ++i){
            scanf("%d", &x);
            vec.push_back({x, i});
        }

        for(int i = 0, x; i<n; ++i)
            scanf("%d", &tall[i]);

        sort(vec.rbegin(), vec.rend());
        ans.push_back(vec[0].F);
        for(int i = 1; i<n; ++i)
            ans.insert(ans.begin()+tall[vec[i].S], vec[i].F);

        for(int i = 0 ;i<n; ++i)
            printf("%d%c", ans[i], i==n-1? '\n':' ');
    }
}

