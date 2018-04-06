#include <cstdio>
#include <algorithm>

using namespace std;
int main()
{
    int a, b, c, last=1, tot=1;

    scanf("%d %d", &a, &c);
    for(int i=1; i<a; i++)
    {

        scanf("%d", &b);
        if(c==b)
            last++;
        else
            last = 1;
        tot = max(last, tot);
        c = b;
    }

    printf("%d\n", tot);
    return 0;
}

