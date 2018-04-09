#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    string s;
    bool i, b;
    char x;
    while(getline(cin, s))
    {
        i = b = 1;
        for(int j = 0; j<(int)s.size(); ++j)
            if((x = s[j])=='_')
            {
                if(i)
                    cout<<"<i>";
                else
                    cout<<"</i>";
                i = !i;
            }
            else if(x == '*')
            {
                if(b)
                    cout<<"<b>";
                else
                    cout<<"</b>";
                b = !b;
            }
            else
                cout<<x;

        cout<<"\n";
    }
}

