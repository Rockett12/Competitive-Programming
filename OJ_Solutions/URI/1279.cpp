#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second

using namespace std;

typedef pair<double, int> ii;
typedef long long int ll;
typedef vector<ii> vi;

long long int bexp(long long int base, int exp)
{
    ll ans=1;
    while(exp)
    {
        if(exp&1LL)
            ans*=base;
        base*=base;
        exp>>=1LL;
    }

    return ans;
}

int main()
{_
    int n , somai, somap, soma3;
    string a;
    bool f, g, c, d=0;


    while(getline(cin, a))
    {
        n = somai = somap = soma3 = 0;
        f = g = 0;
        reverse(a.begin(), a.end());

        if(d)
            cout<<endl;
        d=1;

        for(int i =0; i<5 && i<(int)a.size(); ++i)
            n+=(int)((int)a[i]-'0')*bexp(10, i);

        for(int i =1; i<=(int)a.size(); ++i)
        {
            if(i&1)
                somai+= (int)(a[i-1]-'0');
            else
                somap+= (int)(a[i-1]-'0');

            soma3+= (int)(a[i-1]-'0');
        }

        if(!(n%400) || !(n%4) && n%100 )
            cout<<"This is leap year.\n", f=1;

        if((a[0]=='0' || a[0]=='5') && !(soma3%3))
             cout<<"This is huluculu festival year.\n", g=1;

        if((somai-somap)%11==0 && f && (a[0]=='0' || a[0]=='5'))
            cout<<"This is bulukulu festival year.\n";

        if(!f && !g)
            cout<<"This is an ordinary year.\n";



    }

}
