#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    char x, last;
    bool f;
    while(n--)
    {
        cin>>s;
        last = tolower(s[0]);
        f = 1;
        for(int i = 1; i<(int)s.size() && f; ++i)
        {
            x = tolower(s[i]);
            if(x<=last)
                f = 0;
            last = x;
        }
        cout<<s<<": ";
        if(f) cout<<"O\n";
        else cout<<"N\n";
    }
}
