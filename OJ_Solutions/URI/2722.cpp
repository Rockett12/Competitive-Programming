#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n;
    cin>>n;
    string s, a;
    getline(cin, s);

    while(n--)
    {
        getline(cin, s);
        getline(cin, a);

        for(int i =0; i<(int) s.size(); i+=2)
        {
            for(int j = i; j<i+2 && j<(int)s.size(); ++j)
                cout<<s[j];

            for(int j = i; j<i+2 && j<(int)a.size(); ++j)
                cout<<a[j];
        }

        cout<<endl;
    }

}

