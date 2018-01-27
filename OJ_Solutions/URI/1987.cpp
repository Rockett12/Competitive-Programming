#include <iostream>
#include <vector>
#include<algorithm>
#define _ ios::sync_with_stdio(0);
using namespace std;



int main()
{_
    int n,b;
    string a;
    while(cin>>n>>a)
    {
        b =0;
        for(int i =0; i<(int)a.size(); ++i)
        {
            b += (int) a[i]-'0';
        }

        if(b%3==0)
            cout<<b<<" sim\n";
        else
            cout<<b<<" nao\n";
    }




}


