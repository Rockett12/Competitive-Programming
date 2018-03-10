#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define MAXN 99999
#define MAXM 99999
#define pb push_back

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;

int main()
{
    int n, m , a, b, c, x, y;
    int sum = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        sum+=abs(a);
    }

    printf("%d\n", sum);
}
