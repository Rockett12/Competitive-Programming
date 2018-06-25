#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if(n<=800)
        puts("1");
    else if(n<=1400)
        puts("2");
    else
        puts("3");
}

