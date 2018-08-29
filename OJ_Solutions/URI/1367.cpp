#include <iostream>
using namespace std;
int pen[30];
bool ac[30];
int main() {
    ios::sync_with_stdio(0);
    int n, sum, num, tm;
    string s;
    char x;
    while (cin >> n && n) {
        sum = 0, num = 0;
        while (n--) {
            cin>>x>>tm>>s;
            if (s[0] == 'i' && !ac[x-'A']) {
                ++pen[x-'A'];
            } else {
                sum += tm;
                ac[x-'A'] = 1;
                ++num;
            }
        }
        for (int i = 0; i<26; ++i)
            sum+=ac[i]?20*pen[i]:0, pen[i] = 0, ac[i] = 0;
        cout << num << ' ' << sum << '\n';
    }

}
