#include <queue>
#include <cstdio>
#define MAXN 1200
using namespace std;

int tree[MAXN], TC=0, k;
char frase[MAXN], letras[MAXN];


void backtracking(int n)
{

    if(tree[(n<<1)]==TC)
        backtracking(n<<1);

    frase[n] = letras[k++];

    if(tree[((n<<1)|1)]==TC)
        backtracking((n<<1)|1);

}

int main()
{
    int n;
    while(scanf("%d%*c", &n)&&n)
    {
        ++TC;
        for(int i = 0; i<=n; ++i)
            tree[i] = TC;

        gets(letras);
        k =0;
        backtracking(1);

        for(int i = 1; i<=n; ++i)
            printf("%c", frase[i]);
        puts("");

    }
}
