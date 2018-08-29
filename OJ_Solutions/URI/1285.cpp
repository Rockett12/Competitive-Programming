#include <cstdio>
#include <vector>
using namespace std;
int d[5123];
int main() {
  int a, b, mask, ans, i , j, f;
  for (i = 1; i<=5000; ++i) {
    mask = 0, a = i;
      f = 1;
      while (a && f) {
        if (mask&(1<<(j = a%10))) f = 0;
        mask|=1<<j;
        a/=10;
      }
      d[i] = d[i-1]+f;
  }
  while (scanf("%d %d", &a, &b)!=EOF) {
    printf("%d\n", d[b]-d[a-1]);
  }
}
