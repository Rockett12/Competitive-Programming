#include <cstdio>
#include <cstring>
int main()
{
    int  a, maius=0;
    int i;
    char n[1005];
    scanf("%s", &n);
    if(n[0]>90) n[0]-=32;
    printf("%s\n", n);
}

