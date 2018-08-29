#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cctype>
#define MAXN 1123
#define F first
#define S second
using namespace std;
typedef pair<string ,string> ss;
vector<ss> v;
int main() {
    int n, s;
    ios::sync_with_stdio(0);
    string a, b;
    while(getline(cin, a)) {
        b= a;
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        v.push_back({a,b});
    }

    sort(v.begin(), v.end());
    cout << v[v.size()-1].second <<'\n';
}

