#include <iostream>
#include <algorithm>
#include  <vector>
#include <cstring>

#include <cstdio>
#define _ ios::sync_with_stdio(0);
#define S second
#define F first
#define MAXN 2005


using namespace std;




int main()
{
    int u, v, w, f, i;

    char a[200], b[10], c[10], d[10];

    while(scanf("%s", a))
    {
        f = u = v=0;
        for(i = 0; a[i]!='\0'; ++i);

        for(--i; i>=0; --i)
        {
            if(a[i]=='+'){
                c[f]='\0';
                f= -1;
                continue;
            }

            if(a[i]=='=')
            {
                d[u]='\0';
                u=-1;
                continue;
            }

            if(u!=-1)
                d[u++]=a[i];
            else if(f!=-1)
                c[f++]=a[i];
            else
                b[v++]=a[i];
        }

        b[v]='\0';

        sscanf(b, "%d", &f);
        sscanf(c, "%d", &u);
        sscanf(d, "%d", &v);

        if(f+u==v)
            printf("True\n");
        else
            printf("False\n");
        if(f+u+v == 0)
            break;


    }



}

