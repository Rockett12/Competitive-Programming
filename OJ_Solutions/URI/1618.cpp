#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n,a,b,c,d,x,y;
    cin>>n;
    while (n--) {
        cin>>a>>a>>a>>b>>c>>c>>c>>d>>x>>y;
        if(c<=x && x<=a && b<=y && y<=d) cout<<1<<endl;
        else cout<<0<<endl;
    }
}

