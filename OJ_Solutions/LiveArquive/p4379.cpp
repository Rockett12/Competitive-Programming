#include <iostream>
#include <vector>
#include<algorithm>
#include <stack>
#define _ ios::sync_with_stdio(0);
using namespace std;



int main()
{_
    int n, i;
    string tip, a, b;
    stack<char> st;
    bool j=0;
    while(getline(cin, a))
    {
        i=0;
        if(j)
            cout<<endl;
        j= 1;

        tip="";
        b = "";
        for(i =0; a[i]!=' '; ++i)
        {
            tip+=a[i];
        }
        ++i;
        for(; a[i]!=';'; ++i)
        {
            if(a[i]==',')
            {
                cout<<tip;
                while(!st.empty())
                {
                    cout<<st.top();
                    st.pop();
                }

                cout<<" "<<b<<";"<<endl;
                b="";
            }

            else
            {
                if(isalpha(a[i]))
                   b+=a[i];
                else if(a[i]==' ')
                    continue;
                else if(a[i]=='[')
                {
                    st.push(']');
                    st.push('[');
                    i++;
                }
                else
                    st.push(a[i]);

            }

        }

        if(!st.empty())
        {
            cout<<tip;
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            cout<<" "<<b<<";"<<endl;
        }
        else
        {
            cout<<tip<<" "<<b<<";"<<endl;
        }


    }




}

