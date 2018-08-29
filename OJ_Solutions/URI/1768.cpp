#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
string ss[104];
int main() {
    ios::sync_with_stdio(0);
    ss[0] = "*";
    for(int i = 1; i<=50; ++i)
        ss[i] = "*"+ss[i-1]+"*";

    int n;
    string s;
    while(cin >> n) {
        n>>=1;
        for(int i = 0; i<=n; ++i) {
            for(int j = i; j<n; ++j)
                cout<<' ';
            cout<<ss[i]<<'\n';
        }
        for(int i = 0; i<=1; ++i) {
            for(int j = i; j<n; ++j)
                cout<<' ';
            cout<<ss[i]<<'\n';
        }
        cout<<'\n';
    }
}

