#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
vector<string> vs;
int main() {
    ios::sync_with_stdio(0);
    string s;
    int n , t,  m;
    cin >> t;
    while (t--) {
        vs.clear();
        cin >> n;
        for (int i = 0; i<n; ++i) {
            cin >> s;
            vs.push_back(s);
        }

        for (int i = 0, x = 0, sum, p, j; i<n; ++i) {
            cin>>s;
            for (j = 0, sum = 0, p = 0; j<(int)s.size(); ++j) {
                if (s[j] == 'P')
                    ++p, ++sum;
                else if (s[j] == 'A') ++sum;
            }
            if (p*100<sum*75) {
                if(x) cout << ' ';
                cout<<vs[i];
                x = 1;
            }
        }

        cout << '\n';

    }
}

