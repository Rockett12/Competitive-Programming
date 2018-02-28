
#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int um ,zero, resp, n;
    string s;

    while((cin>>n)&&n)
    {
        while(n--)
        {
            um = zero = resp =0;
            cin>>s;

            for(int i = 0; i<(int)s.size(); ++i)
            {
                if(i&1)
                    um += (s[i]-'0');
                else
                    zero += (s[i]-'0');
            }

            while(um)
                resp+=um%10, um/=10;

            while(zero)
                resp+=zero%10, zero/=10;

            cout<<resp<<endl;
        }
    }


}
