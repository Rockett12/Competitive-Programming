#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main(){$
    string s;
    int i=0, f=1, n;
    bool esp;
    getline(cin, s);
    if(s[0]=='0')
        return 0;
    while(f)
    {
        getline(cin, s);
        ++i;
        esp = 1;
        for(int j = 0;esp && s[j]; ++j)
        {
            if(s[j]==' ')
                esp=0;
        }
        if(esp)
        {
            cout<<i-1<<'\n', i = 0;
            if(s[0]=='0')
                f = 0;
        }
    }
}

