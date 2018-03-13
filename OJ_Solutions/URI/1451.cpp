#include<iostream>
#include <stack>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    string texto, pre, suf, s, t;
    stack<string> p;
    char x;
    while(getline(cin, s))
    {
        t="";
        for(int i = 0 ; i<(int)s.size(); ++i)
            if((x=s[i]) == '[')
                p.push(t), t = "";
            else if(x == ']')
                while(!p.empty())
                    t+=p.top(), p.pop();
            else
                t+=x;

        while(!p.empty())
                t+=p.top(), p.pop();

        cout<<t<<endl;
    }
}
