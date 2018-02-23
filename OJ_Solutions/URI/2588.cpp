#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;




int main()
{$
    int n,f=1, a, b,m;
    string s;
    int TC = 0;
    char x;
    while(cin>>s)
    {
        a = b=0;
        sort(s.begin(), s.end());
        x = s[0];
        for(int i =0; i<(int)s.size(); ++i)
        {
            if(s[i]==x)
            {
                a = !a;
            }
            else{
                if(a&1)
                    b++;
                a=1;
            }
            x = s[i];
        }
        if(a)
            b++;
        if(b)
            cout<<b-1<<endl;
        else
            cout<<b<<endl;

    }




}


