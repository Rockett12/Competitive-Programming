#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s, ss="nopqrstuvwxyzabcdefghijklm",sss="NOPQRSTUVWXYZABCDEFGHIJKLM";
    char x;
    while(getline(cin, s))
    {
        for(int i = 0; s[i]; ++i)
        {
            if(isalpha(x = s[i]))
                if(x>='a')
                    x = ss[x-'a'];
                else
                    x = sss[x-'A'];

            cout<<x;
        }
        cout<<'\n';
    }
}

