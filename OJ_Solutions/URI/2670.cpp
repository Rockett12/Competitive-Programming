#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, m;
    scanf("%d %d %d", &a, &b, &c);
    m = min((b<<1)+(c<<2), min((a<<1)+(c<<1), (b<<1)+(a<<2)));
    printf("%d\n", m);

}

