#include <iostream>
#include <stack>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main(){_
    int t, dia;
    cin>>t;
    string a;
    stack<char> st;
    while(t--)
    {
        cin>>a;
        while(!st.empty())
            st.pop();

        dia = 0;
        for(int i=0; i<(int)a.size(); ++i)
        {
            if(a[i]=='<')
            {
                st.push('<');
            }
            else if(a[i] == '>')
            {
                if(!st.empty())
                {
                    st.pop();
                    dia++;
                }

            }
        }

        cout<<dia<<endl;
    }
}
