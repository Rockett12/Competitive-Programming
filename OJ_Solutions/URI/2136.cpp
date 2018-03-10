#include <iostream>
#include <algorithm>
#include <set>
#define $ ios::sync_with_stdio(0);
#define pb insert
using namespace std;
typedef set<string> st;
int main()
{$
    string s, a, win="";
    st yes, no;
    int i =0;
    while(cin>>s && s!="FIM")
    {
        cin>>a;
        if(a=="YES")
        {
            if(s.size()>win.size())
                win = s;
                yes.pb(s);
        }
        else
            no.pb(s);
    }

    st::iterator it = yes.begin();

    for(; it!=yes.end(); ++it)
        cout<<*it<<endl;
    for(it = no.begin(); it!=no.end(); ++it)
        cout<<*it<<endl;

    cout<<"\nAmigo do Habay:\n"<<win<<endl;
}

