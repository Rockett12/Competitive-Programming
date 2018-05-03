#include <cstdio>
#include<iostream>
using namespace std;
int row[10], column[10], mat[10][10], subm[10], dx[]={-1,0,1,0,-1,1,1,-1,-1};
int main()
{
    int n, flag = (1<<10)-2, c=0;
    scanf("%d", &n);
    while(n--)
    {
        for(int i = 0; i<9; ++i)
            row[i] = column[i] = subm[i] = 0;

        for(int i = 0; i<9; ++i)
            for(int j = 0, x; j<9; ++j)
                scanf("%d", &x), row[i]|= (1<<x), column[j]|= (1<<x), mat[i][j] = x;

        for(int i = 1, x= 0; i<9; i+=3)
            for(int j = 1; j<9; j+=3, x++)
            {
                subm[x]|= 1<<mat[i][j];
                for(int k = 0; k<8; ++k)
                    subm[x]|= 1<<mat[i+dx[k]][j+dx[k+1]];
            }

        for(int i = 1; i<9; ++i)
            row[i]&=row[i-1], column[i]&=column[i-1], subm[i]&=subm[i-1];

        printf("Instancia %d\n", ++c);
        if(row[8]!=column[8] || row[8]!=flag || subm[8]!=flag) puts("NAO\n");
        else puts("SIM\n");

    }
}
