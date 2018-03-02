#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    int n=0, i=0;
    string s;

    while(i!=3 && getline(cin, s))
    {
        if(s=="caw caw")
        {
            cout<<n<<endl;
            n=0;
            ++i;
        }
        else
        {
            if(s[2]=='*')
                n+=1;
            if(s[1]=='*')
                n+=2;
            if(s[0]=='*')
                n+=4;
        }
    }
}

