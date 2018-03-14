#include <cstdio>
#include <algorithm>
#include <cmath>

int main()
{
    int n , a , b ,c, d, resp;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a, &b);
        resp = 1;
        d = 9999;
        for(int i = 1; i<=a; ++i)
        {
            scanf("%d", &c);
            if((c = abs(c-b))<d)
                resp = i, d = c;
        }

        printf("%d\n", resp);
    }
}

