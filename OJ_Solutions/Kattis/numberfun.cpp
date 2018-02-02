#include <iostream>
#include <algorithm>
#include  <vector>
#include <cmath>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second


using namespace std;


int main()
{_
    int n, m;
    int a, b, c;

    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;
        m = 0;
        if(a+b == c || a*b==c || abs(a-b)==c || a*c == b || b*c==a)
            m =1;

        if(m) cout<<"Possible\n";
        else cout<<"Impossible\n";
    }


}

