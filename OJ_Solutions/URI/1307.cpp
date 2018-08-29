#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    string s;
    int t, n , m, sz;
    cin >> t;
    for (int i = 1; i<=t; ++i) {
        n = 0, m = 0;
        cin >> s;
        sz = (int)s.size()-1;

        for(auto a : s)
            n+= ((int)(a-'0'))<<sz, --sz;
        cin >> s;
        sz = (int)s.size()-1;

        for(auto a : s)
            m+= ((int)(a-'0'))<<sz, --sz;
        cout<< "Pair #"<<i<<": ";
        if(__gcd(n,m)!=1)
            cout<< "All you need is love!\n";
        else
            cout<< "Love is not all you need!\n";
    }

}

