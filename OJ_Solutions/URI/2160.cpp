#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    string s;
    getline(cin , s);

    if((int)s.size()>80)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}

