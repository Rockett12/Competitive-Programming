#include <iostream>
#define _ ios::sync_with_stdio(0);
using namespace std;

int v[101];

int main()
{_
    int p, c;
    p = 0;

    int i =0;
    while(i++<6)
    {
        cin>>c;
        v[c]=1;
    }
    i= 0;
    while(i++<6)
    {
        cin>>c;
        if(v[c])
            ++p;

    }
    if(p==3)
        cout<<"terno\n";
    else if(p==4)
        cout<<"quadra\n";
    else if(p==5)
        cout<<"quina\n";
    else if(p==6)
        cout<<"sena\n";
    else
        cout<<"azar\n";


}

