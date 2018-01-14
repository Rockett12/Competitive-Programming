#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int n,a, b, c, d, e;

    stack<int> st;
    queue<int> q;
    priority_queue<int> pq;
    while(cin>>n)
    {
        while(!st.empty())
            st.pop();
        while(!q.empty())
            q.pop();
        while(!pq.empty())
            pq.pop();

        c = d = e = 1;
        while(n--)
        {


            cin>>a>>b;
            if(a&1)
            {
                st.push(b);
                q.push(b);
                pq.push(b);
            }
            else
            {
                if(st.top()!=b)
                    c = 0;
                if(q.front()!=b)
                    d = 0;
                if(pq.top()!=b)
                    e = 0;

                st.pop();
                q.pop();
                pq.pop();
            }
        }

        if(!(c+d+e))
            cout<<"impossible\n";
        else if(c+d+e>1)
            cout<<"not sure\n";
        else if(c)
            cout<<"stack\n";
        else if(d)
            cout<<"queue\n";
        else
            cout<<"priority queue\n";
    }
}

