#include <cstdio>
using namespace std;
int v[105];
int main(){
    int n , g, r,s, ans,j;
    while (scanf("%d %d", &n, &g)!=EOF) {
        ans = 0;
        for (j = 0; j<=100; v[++j] = 0);
        for (int i = 0; i<n; ++i) {
            scanf("%d %d", &s, &r);
            s-=r;
            if(s>0)
                ans+=3;
            else
                ++v[-s];
        }

        r = v[0];
        if(g<r)
            r = g;
        ans += 3*r, g-=r, ans+=v[0]-r, v[0] = 0;
        for (int i = 1; i<=100; ++i) {
            if (v[i]) {
                r = g/(i+1);
                if (v[i]<r)
                    r = v[i];
                ans+= 3*r;
                g-=r*(i+1); v[i]-=r;

                r = g/(i);
                if (v[i]<r)
                    r = v[i];
                ans+=r;
                g-=r*i, v[i]-=r;
                if (v[i]) {
                    break;
                }
            }
        }
        printf("%d\n",ans);
    }
}
