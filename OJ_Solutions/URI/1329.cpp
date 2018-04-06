#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, m, j,a;
    while(cin>> n && n)
    {
        m = j = 0;
        while(n--)
        {
            cin>>a;
            if(a)
                j++;
            else
                m++;
        }
        printf("Mary won %d times and John won %d times\n", m, j);
    }
}

