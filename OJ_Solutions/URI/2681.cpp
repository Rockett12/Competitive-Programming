#include <cstdio>
#include <iostream>
using namespace std;
typedef long long int ll;
const int mod = 86400LL;
ll bxp(ll base, int exp) {
    ll ans = 1;
    while (exp) {
        if(exp&1) ans = (base*ans)%mod;
        base = (base*base)%mod;
        exp>>=1;
    }
    return ans;
}

int main() {
    string exp;
    ll base = 2, ans;
    int n, hh, mm, ss;
    cin >> exp;
    n = exp.size();
    ans = (1<<(exp[n-1]-'0'))%mod;
    for (int i = n-2;i>=0; --i) {
        base = bxp(base, 10);
        ans = (ans*bxp(base, (int)exp[i]-'0'))%mod;
    }
    ans--;
    if(ans<0) ans+=mod;

    ss = (int)(ans%60LL); ans-=ss;
    mm = (int)(ans%3600LL); ans-=mm;
    hh = (int)ans;
    printf("%02d:%02d:%02d\n", hh/3600, mm/60, ss);
}

