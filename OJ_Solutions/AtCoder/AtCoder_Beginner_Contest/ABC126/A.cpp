#include <bits/stdc++.h>
#define endl '\n'
using ll = long long int;
int main() {
    int n, m, k;
    std::string s;
    std::cin >> n >> k >> s;
    char &c = s[k-1];
    c = tolower(c);
    std::cout << s << endl;
}
