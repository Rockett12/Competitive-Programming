#include <iostream>
#include <vector>
#include <cstdio>
#include <queue>
#define F first
#define S second
#define MAXN 112
using namespace std;

int main()
{
    int n , m;

    scanf("%d %d", &n, &m);
    printf("%d\n%d\n", n*m+(n-1)*(m-1), ((n-1)<<1) +((m-1)<<1));
    return 0;

}

