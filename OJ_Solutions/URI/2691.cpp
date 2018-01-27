#include <iostream>
#include <cstdio>
#include <vector>
#include<algorithm>
using namespace std;



int main()
{
    int n,b, c;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%dx%d", &b, &c);

        if(b==c)
        {
            for(int i = 5; i<=10; ++i)
            {
                printf("%d x %d = %d\n", b, i, b*i);
            }
        }
        else
        {
            for(int i = 5; i<=10; ++i)
            {
                printf("%d x %d = %d && %d x %d = %d\n", b, i, b*i, c, i, c*i);
            }
        }
    }



}


