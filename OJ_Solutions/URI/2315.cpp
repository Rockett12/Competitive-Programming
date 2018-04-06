#include <iostream>

using namespace std;

int mes[14] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    for(int i = 1; i<13; ++i)
        mes[i] +=mes[i-1];
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<mes[d-1]+c-(mes[b-1]+a)<<"\n";
}

