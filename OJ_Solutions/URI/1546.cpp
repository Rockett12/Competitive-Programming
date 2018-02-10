#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;
int main()
{$
    string s;
    int n, a, b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        while(a--)
        {
            cin>>b;
            if(b==1)
                cout<<"Rolien\n";
            else if (b==2)
                cout<<"Naej\n";
            else if(b==3)
                cout<<"Elehcim\n";
            else
                cout<<"Odranoel\n";
        }

    }
}
