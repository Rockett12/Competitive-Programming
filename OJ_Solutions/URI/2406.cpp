#include <stack>
#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int t, f;
    stack<char> st;
    string a;
    char x;
    cin>>t;
    while(t--)
    {
        cin>>a;
        f = 1;
        while(!st.empty())
            st.pop();

        for(int i =0; i<(int)a.size() && f; ++i)
            if((x = a[i])=='{' || x == '[' || x == '(')
               st.push(x);
            else if(!st.empty())
                if(x==')' && st.top()=='(' || x==']' && st.top()=='[' || x=='}' && st.top()=='{')
                    st.pop();
                else
                    f = 0;
            else
                f = 0;

        if(st.empty() && f)
            cout<<"S\n";
        else
            cout<<"N\n";
    }
}
