#include <iostream>
#include <set>

#define _ ios::sync_with_stdio(0);

using namespace std;

int n, m;

int pulo(int atual, int jump)
{
    if(atual==m)
        return 1;
    if(atual>n || atual<=0)
        return 0;

    return pulo(atual+jump, jump+2) + pulo(atual-jump, jump+2);
}

int main()
{
    int f;

    while((cin>>n>>m)&&n)
    {
        f = 0;
        if(n>=49)
            f = 1;
        else
            f = pulo(1, 3);

        if(f)
            cout<<"Let me try!\n";
        else
            cout<<"Don't make fun of me!\n";

    }
}

