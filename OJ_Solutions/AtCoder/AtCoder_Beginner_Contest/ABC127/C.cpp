#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int left = 0, right = INF, u, v;
    while (m--) {
        scanf("%d %d", &u, &v); 
        left = max(left, u);
        right = min(right, v);
    }
    printf("%d\n", max(0, right-left+1));
}
