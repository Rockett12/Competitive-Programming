#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s;
    char x, a;
    stringstream ss;
    int ali, f;
    while(getline(cin,s))
    {
        ss.clear();
        ss<<s;
        ali = 0;
        ss>>s;
        a = tolower(s[0]);
        f = 1;
        while(ss>>s)
        {
            x = tolower(s[0]);
            if(a==x && f)
                ali++, f= 0;
            else if(a!=x)
                f=1;
            a = x;
        }

        cout<<ali<<"\n";
    }
}

