#include <cstdio>
#include <iostream>
#include <stack>
#define MAXN 112345
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
int v[MAXN];
int main() {
    ios::sync_with_stdio(0);
    int n, k, szk, szm, a;
    string key, msg;
    cin >> key >> n;
    getline(cin, msg);
    szk = (int)key.size();
    while (n--) {
        k = 0;
        getline(cin, msg);
        szm = (int)msg.size();
        for (int i = 0, sp = 1, j, jump; i<szm; ++i) {
            if (sp && msg[i] != 'a' && msg[i] != 'e' && msg[i] != 'i' && msg[i] != 'o' && msg[i] != 'u')
                sp = 0;

            for (j = i; j<szm; ++j) {
                if (msg[j] == ' ') {
                    sp = 1;
                    cout<<' ';
                    break;
                } else {
                    if (sp) {
                        jump = 0;
                    } else {
                        jump = key[k++]-'a';
                        if (k == szk) k = 0;
                    }
                    a = (msg[j]-'a')+jump;
                    if (a>=26) a-=26;
                    cout<<(char)(a+'a');
                }
            }
            i = j;
        }
        cout<<'\n';
    }
}
