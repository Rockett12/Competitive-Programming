#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, k;
    scanf("%d %d", &m, &k);
    if (m == 0) {
        if (k == 0) {
            puts("0 0");
        } else {
            puts("-1");
        }
    } else if (m == 1) {
        if (k != 0) {
            puts("-1");
        } else {
            puts("0 0 1 1");
        }
    } else if (k >= 1 << m) {
        puts("-1");
    } else {
        deque<int> dq;
        dq.push_back(k);
        for (int i = 0; i<1<<m; ++i) {
            if (i == k) continue;
            dq.push_back(i);
            dq.push_front(i);
        }
        dq.push_back(k);
        for (int i = 0; i<1<<m+1; ++i) {
            printf("%d%c", dq[i], i+1 == 1 << m+1 ? '\n' : ' ');
        }
    }

}
