#include <cstdio>
#include <algorithm>
using namespace std;
int v[112];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i<n; ++i)
        scanf("%d", v+i);

    sort(v, v+n);
    for (int i = 0; i<n; ++i)
        printf("%d%c", v[i], i==n-1?'\n':' ');

}

