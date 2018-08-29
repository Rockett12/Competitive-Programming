#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
ll fat(int k) {
    ll ans = 1;
    for(int i = 2; i<=k; ++i) {
        ans*= (ll)i;
    }

    return ans;
}
int main() {
    ll n,m;
    int k;
    string s;
    char last;
    while (cin >> s && s != "0") {
        n = 0, m = 1;
        sort(s.begin(), s.end());
        last =  ' ';
        k = 1;
        for(auto e : s) {
            if(e!=last) m*=fat(k), k = 1;
            else k++;
            last = e;
        }
        m*=fat(k);
        cout<< fat((int)s.size())/m <<endl;
    }
}

