#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#define MAXN 112345
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<char, int> ii;
int main()
{$
    int n , cost, m, j, major, sum;
    string s, ans;
    stack<char> st;
    while(cin>>n>>m && n)
    {
        cin>>s;
        st.push(s[0]);
        for(int i = 1; s[i]; ++i)
        {
            while(!st.empty() && st.top()<s[i] && m)
                st.pop(), m--;
            st.push(s[i]);
        }
        ans= "";
        while(!st.empty()) ans+=st.top(), st.pop();
        reverse(ans.begin(), ans.end());


        for(int i = 0; i<(int)ans.size()-m; ++i)
            cout<<ans[i];
        cout<<'\n';

    }
}

