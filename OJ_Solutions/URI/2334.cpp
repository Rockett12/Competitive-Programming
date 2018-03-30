#include <iostream>
#include <sstream>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
using namespace std;
typedef unsigned long long int ull;
int main()
{$
    string s;
    stringstream ss;
    ull a;
    while(cin>>s && s!="-1")
    {
        if(s=="0")
        {
            cout<<0<<endl;
            continue;
        }
        ss.clear();
        ss.str(s);
        ss>>a;
        cout<<a-1<<endl;

    }
}

