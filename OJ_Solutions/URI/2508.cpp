#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    char x;
    int n, a;
    string s;
    while(getline(cin ,s))
    {
        n = 0;
        for(int i = 0; s[i]; ++i)
        {
            if((x =tolower(s[i]))>='a' && x<='z')
                n+= (x-'a')%9+1;
        }

        while(n>9)
        {
            a = 0;
            while(n)
            {
                a+= n%10;
                n/=10;
            }
            n = a;
        }

        cout<<n<<'\n';
    }
}

