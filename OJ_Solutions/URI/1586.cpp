#include <iostream>
#include <vector>
#include <algorithm>
#define MAXN 112345
using namespace std;
long long int v[MAXN], t[MAXN], m , sm, n;
void fobj(int k_) {
  m = 0, sm = 0;
  for (int i = k_, j = 1; i>=0; --i, ++j)
    m += v[i]*j;
  for (int i = k_+1, j = 1; i<n; ++i, ++j)
    sm += v[i]*j;
}

int bbin() {
  int k = 0;
  for (int s = n>>1; s; s>>=1) {
    while (k+s < n) {
      fobj(k+s);
      if(m <= sm) k+=s;
      else break;
    }
  }

  fobj(k);
  if(m == sm)
    return k;
  else
    return -1;
}
vector<string> vs;
int main()
{
  ios::sync_with_stdio(0);
  string s;

  while (cin >> n && n) {
    vs.clear();
    for (int i = 0; i<n; ++i) {
      cin>>s;
      vs.push_back(s);
      m = 0;
      for (auto a : s)
        m+=a;
      v[i] = m;
    }
    m = bbin();
    if (m == -1)
      cout << "Impossibilidade de empate.\n";
    else
      cout << vs[m] << '\n';
  }

}

