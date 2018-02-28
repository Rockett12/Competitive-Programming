#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int n, f =1 , c =0, a, b=-1;

    cin>>n;
    for(int i =0; i<n; ++i)
    {
        cin>>a;
        if(a<b && f)
            c = i+1, f = 0;
        b = a;
    }

    cout<<c<<endl;
}

