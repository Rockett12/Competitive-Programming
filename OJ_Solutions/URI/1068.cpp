#include <stack>
#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    string a;
    stack<char> st;
    bool f;
    while(cin>>a)
    {
        while(!st.empty())
            st.pop();
        f=1;

        for(int i=0; i<(int)a.size(); ++i)
        {
            if(a[i]=='(')
                st.push('(');
            else if(a[i]==')')
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    f = 0;
                    break;
                }
            }

        }

        if(f && st.empty())
            cout<<"correct\n";
        else
            cout<<"incorrect\n";

    }
}
