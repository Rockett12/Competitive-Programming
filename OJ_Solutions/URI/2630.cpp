#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, b, c;
    string s;

    cin>>n;
    for(int i = 1; i<=n; ++i)
    {
        cin>>s>>a>>b>>c;
        if(s=="eye")
            a = 0.3*a+0.59*b+0.11*c;
        else if(s=="min")
            a = min(min(a, b),c);
        else if(s=="max")
            a = max(a,max(b,c));
        else
            a = (a+b+c)/3;

        cout<<"Caso #"<<i<<": "<< a<<endl;
    }
}

