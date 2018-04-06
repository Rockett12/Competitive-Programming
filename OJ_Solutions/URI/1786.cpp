#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    string s;
    int a,b,c;
    while(cin>>s)
    {
        a = s.size();
        b = c = 0;
        for(int i = 0; i<a; ++i)
        {
            b+=(int)(s[i]-'0')*(i+1);
            c+=(int)(s[i]-'0')*(a-i);
        }

        b%=11;
        c%=11;
        if(b==10)
            b=0;
        if(c==10)
            c=0;
        for(int i = 0; i<a; ++i){
            if(i%3==0 && i)
                cout<<".";
            cout<<s[i];
        }

        cout<<"-"<<b<<c<<"\n";

    }
}

