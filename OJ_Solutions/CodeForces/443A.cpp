#include <cstdio>
#include <cctype>
#include <iostream>
using namespace std;
int v[300];
int main() {
    ios::sync_with_stdio(0);
    int n, ans = 0;
    string s;
    getline(cin, s);
    for(int i = 1, sz = s.size(); i<sz; ++i) {
        if(isalpha(s[i])) {
            if(!v[s[i]-'a'])
                ans++;
            v[s[i]-'a'] = 1;
        }
    }

    cout << ans << '\n';
}
