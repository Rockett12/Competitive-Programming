#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;
int main()
{_
    int p,c, d ,b;
    cin>>p>>c>>d>>b;
    p*=c;
    d*=b;
    if(p==d)
        cout<<"0"<<endl;
    else if(p>d)
        cout<<-1<<endl;
    else
        cout<<1<<endl;
}

