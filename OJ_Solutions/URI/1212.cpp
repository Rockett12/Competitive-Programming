#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    string a, b;
    int n, m, resp, i, j;
    bool hasca;
    while(cin>>a>>b && (a!="0" || b!="0"))
    {
        n = (int)a.size()-1;
        m = (int) b.size()-1;
        resp = 0;
        hasca = 0;
        for(i = n, j = m;i>=0 && j>=0; --j, --i)
        {
            if(hasca)
                if(a[i]-'0'+b[j]-'0'>8)
                    ++resp;
                else
                    hasca = 0;
            else
                if(a[i]-'0'+b[j]-'0'>9)
                    hasca = 1, ++resp;
        }

        if(hasca)
        {
            if(i>=0 && a[i]=='9')
                ++resp;
            else if(j>=0 && b[j]=='9')
                ++resp;

        }

        if(!resp)
            cout<<"No carry operation.\n";
        else if(resp==1)
            cout<<"1 carry operation.\n";
        else
            cout<<resp<<" carry operations.\n";
    }
}
