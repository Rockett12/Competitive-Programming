#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    string a;

    cin>>n;
    for(int i = 0; i<n; ++i)
    {
        cin>>a;
        if((int)a.size()<=10)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a[0]<<(int)a.size()-2<<a[a.size()-1]<<endl;
        }
    }
}

