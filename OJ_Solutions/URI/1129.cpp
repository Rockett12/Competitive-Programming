#include <cstdio>

char resp[] = {'A', 'B', 'C', 'D', 'E'};
int main()
{
    int n,a;
    bool f;
    char printa;
    while(scanf("%d", &n)&&n)
    {
        while(n--)
        {
            f =0;
            for(int i = 0; i<5; ++i)
            {
                scanf("%d", &a);
                if(a<=127)
                {
                    if(f)
                        printa = '*';
                    else
                        printa = resp[i];
                    f = 1;
                }
            }

            printf("%c\n", f?printa:'*');
        }
    }
}

