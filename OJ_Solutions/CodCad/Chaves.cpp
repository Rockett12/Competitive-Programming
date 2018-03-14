#include <iostream>
#include <cstdio>
#include <stack>
#include <algorithm>
#define MAXN 1001

using namespace std;

int main(){

    int n;
    string s;
    stack<char> p;

    cin>>n;
    bool a = 1;
    getchar();
    while(n-- && getline(cin, s))
        for(int i=0; i<(int)s.size() && a; i++)
            if(s[i]=='{')
                p.push(s[i]);
            else if(s[i]=='}')
                if(!p.empty())
                    p.pop();
                else
                    a = 0;

    if(a && p.empty())
        puts("S");
    else
        puts("N");

    return 0;
}
