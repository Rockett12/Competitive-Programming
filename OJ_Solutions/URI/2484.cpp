#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    string s;

    string ss[200];
    ss[0] = "";
    for(int i = 1; i<101; ++i)
        ss[i] = ss[i-1]+" ";
    while(cin>>s)
    {
        for(int i =0; i<(int)s.size(); ++i)
        {
            cout<<ss[i];
            for(int j =0; j<(int)s.size()-i; ++j)
            {
                if(j)
                    cout<<" ";
                cout<<s[j];
            }
            cout<<endl;
        }

        cout<<endl;


    }
}

