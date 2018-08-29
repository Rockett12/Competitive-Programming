#include <cstdio>

int main(){
    int a, b, s = 1<<4, c;
    for(int i = 0; i<16; ++i){
        scanf("%d", &c);
        if(c==1)
            a = s+i;
        else if(c==9)
            b = s+i;
    }

    if((a>>=1)==(b>>=1))
        puts("oitavas");
    else if((a>>=1)==(b>>=1))
        puts("quartas");
    else if((a>>=1)==(b>>=1))
        puts("semifinal");
    else
        puts("final");
}

