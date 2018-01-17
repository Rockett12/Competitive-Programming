#include <cstdio>
#include <cstring>
int main()
{
    int  a, maius=0;
    int i;
    char n[105];
    scanf("%s", &n);
    a = strlen(n);
    for(i =0; n[i]!='\0'; ++i)
        if(n[i]<92) ++maius;

    if(maius>a/2){
        for(i =0; n[i]!='\0'; ++i)
            printf("%c", n[i]<92?n[i]:n[i]-32);
        puts("");
    }
    else{
        for(i =0; n[i]!='\0'; ++i)
            printf("%c", n[i]<92?(char)n[i]+32:n[i]);
        puts("");
    }



}

