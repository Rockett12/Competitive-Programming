#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int n, a;
    cin>>n;
    string s;
    char x;
    while(n--)
    {
        cin>>s;
        a = 0;
        for(int i =0; i<(int)s.size(); ++i)
        {
            if((x = s[i]) == '1')
                a+=2;
            else if(x == '7')
                a+=3;
            else if(x == '4')
                a+=4;
            else if(x == '2' || x == '5' || x =='3')
                a+=5;
            else if(x == '6' || x == '9' || x == '0')
                a+=6;
            else
                a+=7;
        }

        cout<<a<<" leds\n";
    }
}

