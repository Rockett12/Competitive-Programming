#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<90 || n==360)
            cout<<"Bom Dia!!\n";
        else if(n<180)
            cout<<"Boa Tarde!!\n";
        else if(n<270)
            cout<<"Boa Noite!!\n";
        else if(n<360)
            cout<<"De Madrugada!!\n";
    }
}

