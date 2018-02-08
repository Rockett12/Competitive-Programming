
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n, v[1004], i;
    int a, b;
    double ga, gb;
    scanf("%d %d", &n, &i);

    scanf("%d", &a);
    i--;
    while(i--)
    {
        scanf("%d", &b);
        if(abs(b-a)>n)
        {
            printf("GAME OVER\n");
            return 0;
        }

        a=b;
    }

    printf("YOU WIN\n");

    return 0;
}
