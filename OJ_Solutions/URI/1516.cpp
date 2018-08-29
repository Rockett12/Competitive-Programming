#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#define MAXN 1123
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;

int main() {
    string ss[100], s;
    int n , m,a,b;
    ios::sync_with_stdio(0);
    while (cin>>n>>m && n) {
        for(int i = 0; i<n; ++i) {
            cin >> ss[i];
        }

        cin>>a>>b;
        a/=n, b/=m;

        for (int i  = 0; i<n; ++i) {
            s = "";
            for (auto e : ss[i])
                for (int j = 0; j<b; ++j)
                    s+=e;
            for (int j = 0; j<a; ++j)
                cout<<s<<'\n';
        }

        cout<<'\n';
    }
}
