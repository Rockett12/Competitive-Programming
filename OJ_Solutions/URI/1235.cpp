#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s,a,b;
    getline(cin, s);

    while(t--)
    {
        getline(cin , s);
        n = (int)s.size();
        reverse(s.begin(), s.begin()+(n>>1));
        reverse(s.begin()+(n>>1), s.end());
        cout<<s<<endl;
    }
}

