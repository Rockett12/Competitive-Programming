#include <iostream>
#include <stack>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int t, a, d, topo;
    stack<int> st, bt;
    while((cin>>t)&&t)
    {
        while((cin>>a)&&a)
        {

            while(!bt.empty())
                bt.pop();

            st.push(a);
            for(int i = 1; i<t; ++i)
            {
                cin>>a;
                st.push(a);
            }
            d = t;
            while(!st.empty())
            {
                bt.push(st.top());
                st.pop();
                while(!bt.empty() && d == bt.top())
                {
                    d--;
                    bt.pop();
                }
            }

            if(d>0)
            {
                while(!bt.empty() && d == bt.top())
                {
                    d--;
                    bt.pop();
                }
            }

            if(bt.empty())
                cout<<"Yes\n";
            else
                cout<<"No\n";

        }
        cout<<endl;
    }

    return 0;
}

