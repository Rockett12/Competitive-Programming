#include <cstdio>

int main() {
  int n , m, v, sm, sv, am, av;
  scanf("%d", &n);
  while (n--) {
    sm = 0, sv = 0, am = 0, av = 0;
    scanf("%d x %d", &m, &v);
    sm += m, sv += v;
    av = v;

    scanf("%d x %d", &v, &m);
    sm += m, sv += v;
    am = m;

    if (sm > sv) {
      puts("Time 1");
    } else if (sv > sm) {
      puts("Time 2");
    } else if (am > av) {
      puts("Time 1");
    } else if (av > am) {
      puts("Time 2");
    } else {
      puts("Penaltis");
    }
  }
}

