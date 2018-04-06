#include <iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
        if(!(a%6))
            cout<<"Y\n";
        else
            cout<<"N\n";
}

