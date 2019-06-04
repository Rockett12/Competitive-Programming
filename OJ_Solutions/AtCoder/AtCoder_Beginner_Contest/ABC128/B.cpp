#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
  	int n, a;
  	vector<tuple<string, int, int> > v;
  	cin >> n;
  	for (int i = 1; i<=n; ++i) {
    	cin >> s >> a;
      	v.emplace_back(s, -a, i);
    }
  	sort(v.begin(), v.end());
  	for (int i = 0; i<n; ++i) {
        cout << get<2>(v[i]) << endl;
    }
}
