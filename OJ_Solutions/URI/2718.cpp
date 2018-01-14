
#include <iostream>
#include <algorithm>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    long long int n ,a , con, resp;

    cin>>n;

    while(n--)
    {
        cin>>a;
        resp = con = 0LL;

        while(a)
        {
            while(a && !(a&1LL))
                a>>=1LL;

            while(a && (a&1LL))
                a>>=1LL, ++con;

            resp = max(resp, con);
            con = 0LL;
        }

        cout<<resp<<endl;

    }
}
