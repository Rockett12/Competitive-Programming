#include <cstdio>
int main()
{
    int  t,n, m;
    char x;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%c%d", &n, &x, &m);
        if(n==m)
            m*=m;
        else if(x<'a')
            m-=n;
        else
            m+=n;
        printf("%d\n", m);
    }
}
