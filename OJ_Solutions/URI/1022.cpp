#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int t, a, b, c, d, mmc, mdc, num;
    char x, v;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %c %d %c %d %c %d", &a,&v, &b,&x,&c,&v,&d);

        if(x=='+')
        {
            mmc = b*d, num = a*d+c*b ;
            printf("%d/%d = %d/%d\n", num, mmc, num/__gcd(mmc,num), mmc/__gcd(mmc,num));
        }
        else if(x=='-')
        {
            mmc = b*d, num = a*d-c*b;
            printf("%d/%d = %d/%d\n", num, mmc, num/abs(__gcd(mmc,num)), mmc/abs(__gcd(mmc,num)));
        }
        else if(x=='*')
        {
            a*=c, b*=d;
            printf("%d/%d = %d/%d\n", a, b, a/__gcd(a,b),b/__gcd(a,b));
        }
        else
        {
            a*=d, b*=c;
            printf("%d/%d = %d/%d\n", a, b, a/__gcd(a,b),b/__gcd(a,b));
        }
    }
}

