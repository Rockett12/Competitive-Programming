#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n, ans;;
    string s;
    while (cin >> s >> n) {
        ans = 0;
        s+='W';
        for (int i = 0, j = 0; i<s.size(); ++i) {
            if(s[i] == 'W') {
                if(j) ++ans, j = 0;
                ++ans;
            } else {
                ++j;
                if(j == n) ++ans, j = 0;
            }
        }

        cout<< ans-1<< '\n';
    }
}

