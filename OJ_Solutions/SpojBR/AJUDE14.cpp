#include <iostream>
#define _ ios::sync_with_stdio(0);
using namespace std;


int main()
{_

    int n, soma=0, a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        soma+=a;
    }

    cin>>n;
    if(soma==n)
        cout<<"Acertou\n";
    else
        cout<<"Errou\n";
}


