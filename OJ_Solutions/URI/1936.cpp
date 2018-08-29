#include <iostream>
#include <cstdio>
using namespace std;
int fat[15];
int main()
{
    int n;
    fat[1] = 1;
    for (int i = 2; i<=10; ++i) {
        fat[i] = i*fat[i-1];
    }
    scanf("%d", &n);
    int ans = 0, j = 10;
    while (n) {
        while (fat[j]<=n)
        n-=fat[j], ++ans;
        --j;
    }
    printf("%d\n", ans);
}
