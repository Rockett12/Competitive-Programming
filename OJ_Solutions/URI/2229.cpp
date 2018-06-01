#include <cstdio>
using namespace std;

int main()
{
    int n, resp, j = 0;
    while(scanf("%d", &n)&&n!=-1)
    {
        resp =(1<<n)+1;
        printf("Teste %d\n", ++j);
        printf("%d\n\n", resp*resp);
    }
}
