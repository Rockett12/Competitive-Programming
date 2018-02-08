#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;
int main()
{_
    string a;

    cin>>a;
    int c=0;
    for(int i =0; i<(int)a.size(); ++i)
        if(a[i]=='1')
            c++;

    if(c&1)
        cout<<a+"1\n";
    else cout<<a+"0\n";
}

