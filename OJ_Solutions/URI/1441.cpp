#include <cstdio>

int main() {
  int n, ans;
  while (scanf("%d", &n)&&n) {
    ans = 1;
    while (n>1) {
      if (n>ans)
        ans = n;
      if (n&1)
        n = 3*n+1;
      else
        n >>= 1;
    }
    printf("%d\n", ans);
  }
}

