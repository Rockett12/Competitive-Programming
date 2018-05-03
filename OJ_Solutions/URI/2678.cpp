#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n;
    char x;
    string s, ss="22233344455566677778889999";
    while(getline(cin, s))
    {
        for(int i = 0; (x = toupper(s[i])); ++i)
        {
            if(isalnum(x) || x == '*' || x=='#')
            {
                if(x>='A')
                    x = ss[x-'A'];
                cout<<x;
            }

        }
        cout<<'\n';
    }
}

