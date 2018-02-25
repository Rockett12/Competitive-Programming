#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
#include <cstdio>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{$
    int n, m, a=0 , q,b=0, c=1, k=0, i, per, pt, r;
    char x;
    char s[105], t[105],s2[105];
    while((scanf("%d %d", &n, &q))&&n)
    {
        scanf(" %s", t);

        while(q--)
        {
            scanf("%d %d", &k, &m);
            m%= 2*n;
            c = 0;

            for(i=0; t[i]!='\0'; ++i)
                s[i] = t[i];
            s[i] = '\0';

            if(m)
            {
                if(s[c]=='x')
                    s[c]='o';
                else s[c]='x';
                m--;
            }
            while(m--)
            {
                c = (c+k)%n;
                if(s[c]=='x')
                    s[c]='o';
                else s[c]='x';
            }

            printf("%s\n", s);
        }
    }

}
