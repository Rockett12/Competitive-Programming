#include <cstdio>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d", &n , &m);
    printf("%d\n", (n+m-2)&1 ? 0 : 1);
}

