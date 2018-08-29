#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  string s, last;
  int n, m;
  bool f;
  cin >> n;
  while (n--) {
    cin >> m;
    cin >> last;
    f = 1;
    while (--m) {
      cin >> s;
      if (s != last)
        f = 0;
    }

    if (f)
      cout << last << '\n';
    else
      cout << "ingles\n";
  }
}

