#include <stdio.h>

int main()
{
    char nom[55];
    int n;
    scanf("%d%*c", &n);
    while(n--)
    {
        gets(nom);

        int i, state=1;

        for(i=0; nom[i]!='\0'; ++i)
        {
            if(nom[i]!=' ' && state)
            {
                printf("%c", nom[i]);
                state = !state;
            }
            else if (nom[i] == ' ')
                state = 1;
        }
        puts("");

    }
}

