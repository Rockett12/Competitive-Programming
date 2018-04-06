#include <iostream>

using namespace std;

int main()
{
    int n, m,a, b,c;
    string s, r;
    bool f;
    while(cin>>n>>m)
    {
        f = 1;

        while(m--)
        {
            cin>>s;
            c =0;
            for(int i = 1; i<=n; ++i)
                cin>>a,c+=a;

            if(f && c==n)
                r = s, f=0;
        }

        if(f)
            cout<<"Pizza antes de FdI\n";
        else
            cout<<r<<endl;
    }
}

