#include <cstdio>

using namespace std;

int main()
{
    int v[10], soma =0;
    for(int i = 0; i<6; ++i)
    {
        scanf("%d", v+i);
    }

    if(v[3]-v[0]>0) soma+=v[3]-v[0];
    if(v[4]-v[1]>0) soma+=v[4]-v[1];
    if(v[5]-v[2]>0) soma+=v[5]-v[2];

    printf("%d\n", soma);
}
