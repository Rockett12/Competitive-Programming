#include <cstdio>
#include <algorithm>
using namespace std;
int dx[] = {-2,0,2,0,-2}, n ,m, seen[20][20], ox, oy;

int dfs(int i, int j) {
    if(i == ox && oy == j)
        return 0;

    seen[i][j] = 1;
    int ans = 0;
    for (int x = 0,a,b,c; x<4; ++x) {
        a = i+dx[x];
        b = j+dx[x+1];
        if(a<=0 || b<=0 || a>n || b>m) continue;
        if(!seen[a][b]) {
            c = 1+dfs(a, b);
            if(c > ans)
                ans = c;
        }
    }
    seen[i][j] = 0;

    return ans;
}

int main() {
    int a, b;
    scanf("%d %d %d %d %d %d", &n, &m, &a, &b, &ox, &oy);
    printf("%d\n", (dfs(a,b)<<1)+1);
}
