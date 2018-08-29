#include <cstdio>
typedef long long int ll;
ll bxp(ll base, int exp) {
  ll ans = 1;
  while (exp) {
    if (exp&1) ans*=base;
    base*=base;
    exp>>=1;
  }
  return ans;
}
int main()
{
  int n;
  scanf("%d", &n);
  printf("%lld\n", bxp(3, n));
}

