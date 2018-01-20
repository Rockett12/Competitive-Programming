#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int p, b;
    cin>>p>>b;
    if(!p)
        cout<<"C\n";
    else if(b)
        cout<<"A\n";
    else
        cout<<"B\n";
}

