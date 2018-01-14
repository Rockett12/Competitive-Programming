#include <iostream>
#include <algorithm>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int n, a, b;

    cin>>n>>a>>b;
    if(n>=a+b)
        cout<<"Farei hoje!\n";
    else
        cout<<"Deixa para amanha!\n";
    return 0;
}

