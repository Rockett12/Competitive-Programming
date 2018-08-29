#include <cstdio>
#include <algorithm>

using namespace std;
int main() {
  int v[3];
  while (scanf("%d %d %d", v, v+1, v+2)!=EOF) {
    sort(v, v+3);
    if (v[2]*v[2] == v[1]*v[1]+v[0]*v[0]) {
      if (__gcd(v[2], __gcd(v[1], v[0])) == 1) {
        puts("tripla pitagorica primitiva");
      } else {
        puts("tripla pitagorica");
      }
    } else {
      puts("tripla");
    }
  }
}
