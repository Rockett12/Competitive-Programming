#include <cstdio>
using namespace std;
int main(){
    int n , i, m, fis, x, ans, last;
    while(scanf("%d", &n)&&n) {
        ans = 0, fis = -1, last = 0;
        for(i = 0; i<n; ++i) {
            scanf("%d", &x);
            if(x) {
                last = i, fis = i;
                ++i;
                break;
            }
        }

        for (; i<n; ++i) {
            scanf("%d", &x);
            if (x) {
                ans += (i-last-1)>>1;
                last = i;
            }
        }
        if(fis == -1)
            ans = (n>>1)+(n&1);
        else
            ans += (n-last+fis-1)>>1;
        printf("%d\n", ans);
    }
}
