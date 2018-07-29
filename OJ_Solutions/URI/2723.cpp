#include <cstdio>
int main()
{
    int t, n, x, cur;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n); cur  = (1<<5);
        while(n--)
            scanf("%d", &x), cur = ((cur>>x)|(cur<<x))&((1<<11)-1);

        printf("%s\n", cur? "Feliz Natal!":"Ho Ho Ho!");
    }
}
