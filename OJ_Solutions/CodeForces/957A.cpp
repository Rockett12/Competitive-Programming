#include <iostream>
#include <cstdio>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define oo 999999999
#define pb push_back

using namespace std;
typedef long long int ll;

int main()
{
    int n, f=1, t, c = 0;
    cin>>n;
    string s;
    cin>>s;
    char x, ant, pos;
    t = (int)s.size();

    for(int i = 1; i<t-1 && f; ++i)
    {
        if(((ant = s[i-1])==(x =s[i]) || x ==(pos = s[i+1])) && x!='?')
            f = 0;
        else if(x == '?' && (ant==pos || ant=='?' || pos=='?'))
            c = 1;
    }
    if(s[0]=='?' || s[t-1]=='?')
        c=1;

    if(f && c)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
