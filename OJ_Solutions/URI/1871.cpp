#include <iostream>
#include <cstring>
#include <cstdio>

int main()
{
    long long int a, b;
    char s[50];
    while(scanf("%lld %lld", &a, &b)&&a)
    {
        a +=b;
        sprintf(s, "%lld", a);

        for(int i =0; s[i]!='\0'; ++i)
            if(s[i]!='0')
                printf("%c", s[i]);

        puts("");
    }

}

