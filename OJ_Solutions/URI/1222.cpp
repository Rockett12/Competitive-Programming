#include <iostream>
#include <cmath>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n,m,c, lin, le;
    string s;
    while(cin>>n>>m>>c)
    {
        lin = 1;le = 0;
        for(int i = 0;i<n ; ++i)
        {
            cin>>s;
            if(i)le+=1;
            if(le+(int)s.size()>c)
                lin++, le = s.size();
            else
                le+=(int)s.size();
        }

        m = ceil(lin/(double)m);
        cout<<m<<'\n';
    }
}

