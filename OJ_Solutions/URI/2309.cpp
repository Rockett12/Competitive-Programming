#include <cstdio>
#include <algorithm>
using namespace std;
int pont[15] = {0,8,9,10,1,2,3,4,0,0,0,6,5,7};

int main()
{
    int n , m, r=0, s=0,a,j, v[10];
    scanf("%d", &n);
    while(n--)
    {
        m = j = 0;
        for(int i = 0; i<6; ++i)
            scanf("%d", &a), v[i] = pont[a];

        for(int i = 0; i<3; ++i)
            if(v[i]>=v[i+3])
                ++m;
            else
                ++j;

        if(m>j)
            ++r;
        else
            ++s;
    }

    printf("%d %d\n", r, s);
}
