#include <cstdio>
#define $ ios::sync_with_stdio(0);
using namespace std;
int calls[50];
int  fib[50];
int main()
{
    fib[1]=1;
    for(int i = 2; i<=39; ++i)
    {
        calls[i] = calls[i-1]+calls[i-2]+2;
        fib[i] = fib[i-1]+fib[i-2];
    }

    int n, a;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        printf("fib(%d) = %d calls = %d\n", a, calls[a], fib[a]);
    }
}

