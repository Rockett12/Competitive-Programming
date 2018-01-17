#include <cstdio>
#include <iostream>

using namespace std;
int main()
{

    long long unsigned int n, j = 32, mod;
    char base[55] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";
    string ans;
    while(scanf("%llu", &n))
    {
        ans = "";
        if(n==0)
        {
            puts("0");
            return 0;
        }
        while(n)
        {
            mod = n%j;
            ans+=base[mod];
            n>>=5LL;
        }

        for(int i=ans.size()-1; i>=0 ;--i)
        {
            cout<<ans[i];

        }
        puts("");

    }
}

