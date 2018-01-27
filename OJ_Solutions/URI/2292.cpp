#include <iostream>
#include <vector>
#include<algorithm>
#define _ ios::sync_with_stdio(0);
using namespace std;
typedef unsigned long long int ull;


int main()
{_
    ull n,b, c, d;
    string a;
    cin>>n;

    while(n--)
    {
        cin>>a>>c;
        d = (ull)a.size();
        b= 0;
        for(ull i =0;i<d; ++i)
        {
            if(a[i]=='O')
                b+=1ULL<<i;
        }

        c+=b;
        c%=(1ULL<<(d+1));

        for(ull i =0;i<d; ++i)
        {
            if(c&1)
                a[i]='O';
            else
                a[i]='X';

            c>>=1ULL;
        }

        cout<<a<<endl;

    }





}


