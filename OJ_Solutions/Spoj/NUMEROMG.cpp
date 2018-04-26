#include <iostream>
#include <cmath>
#include <cctype>
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
ll getNum(string s)
{
    ll soma=0;
    for(int i = (int)s.size()-1, j =0, x; i>=0; --i, ++j)
    {
        if(isalpha(x = s[i]))
            soma+= (x - 'A'+10)*pow(36, j);
        else
            soma+=((int)x-'0')*pow(36,j);
    }

    return soma;
}

int main()
{
    int q,d,p;
    ll left, right;
    string a, b, s ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(cin>>a>>b && (a!="0" || b!="0"))
    {
        left = getNum(a);
        right = getNum(b);
        left+=right;
        a = "";

        while(left)
        {
            a+=s[left%36];
            left/=36;
        }

        for(int i = (int)a.size()-1; i>=0; --i)
            cout<<a[i];
        cout<<'\n';
    }
}
