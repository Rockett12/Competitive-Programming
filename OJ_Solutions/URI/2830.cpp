#include <cstdio>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a = (1<<5)-a;
    b = (1<<5)-b;
    if((a>>=1)==(b>>=1))
        puts("oitavas");
    else if((a>>=1)==(b>>=1))
        puts("quartas");
    else if((a>>=1)==(b>>=1))
        puts("semifinal");
    else
        puts("final");
}
