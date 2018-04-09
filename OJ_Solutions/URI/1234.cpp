#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string s;
    bool f ;
    char x;
    while(getline(cin, s))
    {
        f=1;
        for(int i = 0; i<(int)s.size(); ++i)
        {
            if((x = s[i])!=' ')
            {
                if(f)
                    x = toupper(x);
                else
                    x = tolower(x);

                f = !f;
            }
            cout<<x;
        }

        cout<<"\n";
    }
}

