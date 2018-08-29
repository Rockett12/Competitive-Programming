#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);

  int t, S = 0, B = 0, A = 0, s = 0, b = 0, a = 0, x,y,z;
  string ss;
  cin >> t;
  while (t--) {
    cin >> ss;
    cin >> x >> y >> z;
    S+=x, B+=y, A+=z;
    cin >> x >> y >> z;
    s+=x, b+=y, a+=z;
  }
  cout << fixed;
  cout.precision(2);
  cout << "Pontos de Saque: " << s*100.0/S << " %.\n";
  cout << "Pontos de Bloqueio: " << b*100.0/B << " %.\n";
  cout << "Pontos de Ataque: " << a*100.0/A << " %.\n";
}

