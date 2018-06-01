#include <cstdio>
#define MAXN 1123

int v[MAXN];
int main()
{
    int n, c;
    scanf("%d", &c);
    double media;
    int sum;
    while(c--)
    {
        scanf("%d", &n);
        sum = 0;
        for(int i = 0; i<n; ++i)
        {
            scanf("%d", v+i);
            sum+=v[i];
        }
        media = sum/(double)n;
        sum = 0;
        for(int i = 0; i<n; ++i)
        {
            if((double)v[i]>media)
                ++sum;
        }
        media = (double)sum*100.0/n;
        printf("%.3lf%%\n", media);
    }
}

