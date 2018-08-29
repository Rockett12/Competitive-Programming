#include <iostream>
#define MAXN 400000
using namespace std;
int cur;
struct Node {
    int al[26];
    bool isend;
};
Node trie[MAXN];

inline void create(int att_) {
    for (auto &i_ : trie[att_].al)
        i_ = 0;
    trie[att_].isend = 0;
}

bool into(string &p) {
    int att = 0, sz = (int)p.size();
    char a;
    for (int i = 0; i<sz-1; ++i) {
        a = p[i]-'a';
        if (trie[att].al[a] == 0) {
            trie[att].al[a] = cur;
            create(cur);
            ++cur;
        }
        att = trie[att].al[a];
        if (trie[att].isend)
            return 1;
    }
    if (trie[att].al[p[sz-1]-'a'] != 0) {
        return 1;
    } else {
        trie[att].al[p[sz-1]-'a'] = cur;
        create(cur);
        trie[cur++].isend = 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    int n;
    bool flag;
    string s;
    while (cin >> n && n) {
        flag = 1, cur = 1;
        create(0);
        while (flag && n--) {
            cin >> s;
            if(into(s))
                flag = 0;
        }
        if(!flag && n)
            while(n--) cin >> s;

        if(flag) cout << "Conjunto Bom\n";
        else cout << "Conjunto Ruim\n";
    }
}
