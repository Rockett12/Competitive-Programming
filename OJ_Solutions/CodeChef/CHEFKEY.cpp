#include <iostream>
#include <vector>
#include<algorithm>
#include <stack>
#define _ ios::sync_with_stdio(0);
using namespace std;



int main()
{_
    int n, i;
    int tip=0, a, b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        tip = 0;

        for(i = 1; i*i<=n; ++i)
        {
            if(n%i==0)
            {
                if(i<=a && n/i <=b)
                    tip++;
                if(i!=n/i)
                    if(n/i<=a && i <=b)
                        tip++;
            }

        }

        cout<<tip<<endl;
    }




}

