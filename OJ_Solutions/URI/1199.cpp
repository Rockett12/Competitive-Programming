#include <cstdio>
#include <cstring>
int main()
{
    unsigned int n = 10;
    char num[100];
    while(scanf("%s", num)&&num[0]!='-')
    {
        if(strlen(num)>2 && num[1]=='x')
            sscanf(num, "0x%X", &n), printf("%d\n", n);
        else
            sscanf(num, "%d", &n), printf("0x%X\n", n);
    }
}
