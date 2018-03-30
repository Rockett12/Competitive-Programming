#include <map>
#include <iostream>
#include <sstream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    map<string, int> m;
    m[" suco de laranja"]=120;
    m[" morango fresco"]=85;
    m[" mamao"]=85;
    m[" goiaba vermelha"]=70;
    m[" manga"]=56;
    m[" laranja"]=50;
    m[" brocolis"]=34;

    int n, ans, a, b;
    string s, r;
    stringstream ss;
    while(cin>>n && n)
    {
        ans = 0;
        getline(cin, s);
        while(n--)
        {
            getline(cin,s);
            ss.clear();
            ss.str(s);
            ss>>a;
            r="";
            while(ss>>s)
                r+=" "+s;

            ans+=a*m[r];
        }
        if(ans>130)
            cout<<"Menos "<<ans-130<<" mg"<<endl;
        else if(ans<110)
            cout<<"Mais "<<110-ans<<" mg"<< endl;
        else
            cout<<ans<<" mg"<<endl;
    }
}

