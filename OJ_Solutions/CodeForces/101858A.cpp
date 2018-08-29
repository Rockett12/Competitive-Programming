#include <cstdio>
#define mod 1000000007LL
int main(){
    int n;
    long long int p0, p1, cur1 = 1LL, cur0 = 0LL;

    scanf("%d", &n);
    if(n&1)
        puts("0");
    else{
        n>>=1;
        while(n--){
            p0 = cur0, p1 = cur1;
            cur0 = p1+p0, cur1 = (p0<<1LL)+3LL*p1;
            if(cur0>=mod) cur0-=mod;
            if(cur1>=mod) cur1%=mod;
        }
        n = (int)cur1;
        printf("%d\n", n);
    }
}
