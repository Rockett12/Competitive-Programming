#include <cstdio>
int pro[112], col[112];
int main()
{
    int n, m;
    int a, b,c,d;
    int ou, an;
    while(scanf("%d%d", &n, &m)!=EOF && n)
    {
        a=b=c=d=0;
        for(int i = 0, x; i<n; ++i)
        {
            an = 1;
            ou = 0;

            for(int j = 0; j<m; ++j)
            {
                scanf("%d", &x);
                pro[j]|=x;
                col[j]|= !x;
                an&=x;
                ou|=x;
            }

            if(an) a = 1;
            if(!ou) b = 1;
        }

        for(int i = 0; i<m; ++i)
        {
            if(!pro[i]) c = 1;
            if(!col[i]) d= 1;
            pro[i] = col[i] = 0;
        }

        printf("%d\n", 4-a-b-c-d);


    }
}

