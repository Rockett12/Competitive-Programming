#include <iostream>

using namespace std;
typedef long long int ll;
int main()
{
    long long int a,b,c,z,x,y;
    cin>>a>>b>>c;
    cin>>x>>y>>z;

    if(a<=x && b<=y && c<=z)
        cout<<(x/a)*(y/b)*(z/c)<<'\n';
    else cout<<"0\n";

}

