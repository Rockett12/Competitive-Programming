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

vi odd;
int main()
{
    int t, n , m,i,j;
    scanf("%d", &t);
    while(t--)
    {
        odd.clear();
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &m);
            if(m&1) odd.push_back(m);
        }

        if(!odd.empty()){
            sort(odd.begin(), odd.end());
            for(i =0, j = (int)odd.size()-1; i<j; ++i, --j)
            {
                if(i)
                    printf(" ");
                printf("%d %d",odd[j], odd[i]);
            }
            if(i==j)
                printf("%s%d", i? " " : "", odd[i]);
        }
        puts("");
    }
}

