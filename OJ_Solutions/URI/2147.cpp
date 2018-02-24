#include <cstdio>
using namespace std;

int main()
{
    int t, a, b;
    scanf("%d ", &t);
    char s[11234];

    while(t--)
    {
        scanf("%s", s);
        for(a = 0; s[a]!='\0'; ++a);

        if(a>=100)
        {
            printf("%d.%02d\n", a/100, a%100);
        }
        else
            printf("0.%02d\n", a);

    }
}

