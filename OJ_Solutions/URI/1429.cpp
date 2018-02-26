#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int dp[10] ={1},res;
    string s;
    for(int i =1; i<10; ++i) dp[i] = i*dp[i-1];

    while((cin>>s)&&s!="0")
    {
        res =0;
        for(int i =(int)s.size()-1, j=1; i>=0; --i, ++j)
        {
            res+= (int)(s[i]-'0')*dp[j];
        }

        cout<<res<<endl;
    }

}

