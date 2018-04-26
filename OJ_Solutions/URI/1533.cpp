#include <cstdio>

int main()
{
    int n, m, m2,a,resp, major;
    while(scanf("%d", &n)!=EOF && n)
    {
        scanf("%d", &m);
        resp = major = 1;
        m2  = -1;
        for(int i = 2; i<=n; ++i)
        {
            scanf("%d", &a);
            if(a>m)
            {
                m2 = m;
                m = a;
                resp = major;
                major = i;
            }
            else if(a>m2)
                m2 = a, resp = i;
        }

        printf("%d\n", resp);
    }
}

