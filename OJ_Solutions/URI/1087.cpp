#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d;

    while(scanf("%d %d %d %d", &a, &b, &c, &d)&&a)
        if(a==c)
            if(b==d)
                puts("0");
            else
                puts("1");
        else if(b==d || abs(a-c)==abs(b-d))
            puts("1");
        else
            puts("2");

}
