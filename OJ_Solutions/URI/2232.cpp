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
    int n, s;
    long long int ans;
    scanf("%d\n", &n);
    while(n--) {
        scanf("%d", &s);
        ans = 1LL << s;
        printf("%lld\n", ans-1);
    }
}

