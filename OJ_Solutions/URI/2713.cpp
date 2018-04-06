#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    string s;
    int n, f;
    cin>>n;
    char x;
    while(n--)
    {
        cin>>s;
        if((int)s.size()!=8)
        {
            cout<<"FAILURE\n";
            continue;
        }
        f = 1;
        if('A'>s[0] || s[0]>'Z' || 'A'>s[1] || s[1]>'Z' || 'A'>s[2] || s[2]>'Z')
            f = 0;
        else if(s[3]!='-')
            f = 0;
        else if('0'>s[4] || s[4]>'9' || '0'>s[5] || s[5]>'9' || '0'>s[6] || s[6]>'9' || '0'>s[7] || s[7]>'9')
            f=0;


        if(f)
        {
            if((x = s[7])=='1' || x=='2')
                cout<<"MONDAY\n";
            else if(x=='3' || x=='4')
                cout<<"TUESDAY\n";
            else if(x=='5' || x=='6')
                cout<<"WEDNESDAY\n";
            else if(x=='7' || x=='8')
                cout<<"THURSDAY\n";
            else
                cout<<"FRIDAY\n";
        }
        else
            cout<<"FAILURE\n";
    }
}
