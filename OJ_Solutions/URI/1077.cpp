#include <iostream>
#include <stack>
using namespace std;
#define _ ios::sync_with_stdio(0);

int prior(char a)
{
    if(a=='(')
        return 1;
    if(a=='-' || a =='+')
        return 2;
    if(a=='/' || a =='*')
        return 3;
    if(a=='^')
        return 4;

}

int main()
{

    int t;
    cin>>t;
    stack<char> st;
    string a;
    while(t--)
    {
        while(!st.empty())
            st.pop();

        cin>>a;

        for(int i =0; a[i]!='\0'; ++i)
        {
            if(isalnum(a[i]))
                cout<<a[i];
            else if(a[i]==')')
            {
                while(st.top()!='(')
                {
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(a[i]=='(')
                st.push(a[i]);
            else
            {
                while(!st.empty() && prior(st.top())>=prior(a[i]))
                {
                    cout<<st.top();
                    st.pop();
                }
                st.push(a[i]);
            }
        }

        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }

        cout<<endl;
    }


    return 0;
}
