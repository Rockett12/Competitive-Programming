#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#define $ ios::sync_with_stdio(0);

using namespace std;
int mat[12][6];
int main()
{
    int n, k=0;
    vector<int> resp;
    char x;
    while(scanf("%d", &n)!=EOF && n)
    {
        resp.assign(7, (1<<12)-1);
        for(int i = 0; i<n; ++i)
        {
            for(int j = 0,a,b; j<5; ++j)
            {
                scanf("%d %d", &a, &b);
                mat[i][j] = ((1<<a)|(1<<b));
            }

            for(int j = 0; j<6; ++j)
            {
                scanf(" %c", &x);
                resp[j]&= mat[i][x-'A'];
            }

        }

        printf("Teste %d\n", ++k);
        for(int i =0, j=0; i<6; ++i)
        {
            j = log2(resp[i]);
            printf("%d ", j);
        }
        puts("\n");
    }
}
