#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    int n, a;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        a = 0;
        if((int)s.size()>3)
            cout<<3<<endl;
        else{
            if(s[0]=='o')
                a++;
            if(s[1]=='n')
                a++;
            if(s[2]=='e')
                a++;

            if(a>=2)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
}

