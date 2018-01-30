#include <cstdio>


bool composto[100];
int prime[100], v =0;
void crivo()
{
    composto[1] = 1 ;
    composto[0] =  1;
    for(int i = 2; i<=50; ++i)
    {

        if(!composto[i])
        {
            prime[v++] = i;
            for(int j = i*i; j<=65; j+=i)
            {
                composto[j]=1;
            }
        }

    }

}

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    crivo();

    for(int i = 0; i<50; ++i)
    {
        if(prime[i]==n)
        {
            printf(prime[i+1]==m ? "YES":"NO");
            return 0;
        }
    }
}

