#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stack>
#define $ ios::sync_with_stdio(0);
#define MAXN 112345678
#define F first
#define S second
#define pb push_back
using namespace std;

int main()
{$
    int n, resp=0, d=0,a ,b;
    cin>>n;
    cin>>resp>>a;
    n--;
    while(n--)
    {
        cin>>a>>b;

        while(a<=resp)
            a+=b;
        resp = a;
    }

    cout<<resp<<endl;

}


