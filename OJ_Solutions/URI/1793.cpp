#include <iostream>
using namespace std;
int main()
{
    int n, atu, ant, temp;

    while(cin>>n && n)
    {
        cin>>ant;
        n--;
        temp = 0;

        while(n--)
        {
            cin>>atu;
            temp+= min(atu-ant, 10);
            ant = atu;
        }

        cout<<temp+10<<"\n";
    }
}

