#include <cstdio>
#include <queue>
#include <algorithm>
#define MAXN 2123456
#define LIM 1000005
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
bool seen[MAXN];

int n, m;
int bfs() {
    queue<ii> q;
    q.push({LIM,0});
    seen[LIM] = 1;
    ii cur;
    while (!q.empty()) {
        cur = q.front(); q.pop();
        if(cur.F == LIM-1 || cur.F == LIM+1)
            return cur.S;
        if(cur.F+m<=2*LIM && !seen[cur.F+m])
            q.push({cur.F+m, cur.S+1}), seen[cur.F+m] = 1;
        if(cur.F-n>0 && !seen[cur.F-n])
            q.push({cur.F-n, cur.S+1}), seen[cur.F-n] = 1;
    }

    return -1;
}
int main() {
    scanf("%d %d", &m, &n);
    if (__gcd(n,m)!=1) {
        puts("IMPOSSIVEL");
    } else {
        printf("%d\n",bfs());
    }
}

