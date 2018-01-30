#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int v[10];
int main()
{
    int n;
    string a;
    cin>>a;
    for(int i=0; i<(int)a.size(); ++i)
    {
        if(a[i]=='.')
            printf("0");
        else if(a[i]=='-')
        {
            if(a[i+1]=='.')
                printf("1"), i++;
            else
                printf("2"), i++;
        }
    }
    printf("\n");
    return 0;
}

