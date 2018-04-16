#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    char a[100],b[100];
    char op;
    int x, y;
    scanf("%s %c %s", a, &op, b);
    for(int i = 0; a[i]; ++i)
        if(a[i]=='7') a[i] = '0';

    for(int i = 0; b[i]; ++i)
        if(b[i]=='7') b[i] = '0';
    sscanf(a, "%d", &x);
    sscanf(b, "%d", &y);

    if(op == '+')
        x+=y;
    else
        x*=y;

    sprintf(a, "%d", x);
    for(int i = 0; a[i]; ++i)
        if(a[i]=='7') a[i] = '0';
    sscanf(a, "%d", &x);

    printf("%d\n", x);
}
