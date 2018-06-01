#include <cstdio>
int mat[505][505], n, m;

int main()
{
    scanf("%d %d", &n, &m);

    for(int i = 0 ; i<n; ++i)
        for(int j = 0; j<m; ++j)
            scanf("%d", &mat[i][j]);

    int lin = 0, f = 1;

    for(int i = 0 ; i<m; ++i)
        for(int j = n-1; j>=0; --j)
            if(mat[j][i])
                if(j<lin+1)
                {
                    if(j==lin)
                        ++lin;
                }
                else f = 0;


    printf("%c\n", f? 'S':'N');
}
