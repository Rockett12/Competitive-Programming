#include <iostream>
#include <cstdio>
#define $ ios::sync_with_stdio(0);
#define MAXN 200
using namespace std;

char pat[MAXN], tt[MAXN];
int b[MAXN], n, m;
void pprocess()
{
    int i = 0, j =-1; b[0] = -1;

    while(i<m)
    {
        while(j>=0 && pat[i] != pat[j])
            j = b[j];
        ++i, ++j;
        b[i] = j;
    }
}

bool kmp()
{
    int i = 0, j =0;
    while(i<n)
    {
        while(j>=0 && tt[i] != pat[j])
            j = b[j];
        ++i, ++j;
        if(j==m)
        {
            return true;
            j = b[i];
        }
    }

    return false;
}

int main()
{
    int i;
    while(scanf("%s %s", tt, pat)!=EOF)
    {
        for(i = 0; pat[i]!='\0'; ++i);
        m= i;
        for(i = 0; tt[i]!='\0'; ++i);
        n = i;

        pprocess();

        if(kmp())
            printf("Resistente\n");
        else
            puts("Nao resistente");
    }
}

